import 'package:flutter/animation.dart';
import 'package:flutter/painting.dart';
import 'package:flutter/rendering.dart';
import 'package:kraken/rendering.dart';
import 'package:kraken/element.dart';
import 'package:kraken/css.dart';

// CSS Overflow: https://drafts.csswg.org/css-overflow-3/

enum CSSOverflowType {
  auto,
  visible,
  hidden,
  scroll,
  clip
}

List<CSSOverflowType> getOverflowTypes(CSSStyleDeclaration style) {
  CSSOverflowType overflowX = _getOverflowType(style[OVERFLOW_X]);
  CSSOverflowType overflowY = _getOverflowType(style[OVERFLOW_Y]);

  // Apply overflow special rules from w3c.
  if (overflowX == CSSOverflowType.visible && overflowY != CSSOverflowType.visible) {
    overflowX = CSSOverflowType.auto;
  }

  if (overflowY == CSSOverflowType.visible && overflowX != CSSOverflowType.visible) {
    overflowY = CSSOverflowType.auto;
  }

  return [overflowX, overflowY];
}

CSSOverflowType _getOverflowType(String definition) {
  switch (definition) {
    case HIDDEN:
      return CSSOverflowType.hidden;
    case SCROLL:
      return CSSOverflowType.scroll;
    case AUTO:
      return CSSOverflowType.auto;
    case VISIBLE:
    default:
      return CSSOverflowType.visible;
  }
}

mixin CSSOverflowMixin on ElementBase {
  KrakenScrollable _scrollableX;
  KrakenScrollable _scrollableY;

  void updateRenderOverflow(
      RenderBoxModel renderBoxModel,
      Element element,
      void scrollListener(double scrollTop, AxisDirection axisDirection)) {
    CSSStyleDeclaration style = element.style;
    if (style != null) {
      List<CSSOverflowType> overflow = getOverflowTypes(style);
      CSSOverflowType overflowX = overflow[0];
      CSSOverflowType overflowY = overflow[1];
      bool shouldRepaintSelf = false;

      switch(overflowX) {
        case CSSOverflowType.hidden:
          _scrollableX = null;
          renderBoxModel.clipX = true;
          // overflow hidden can be scrolled programmatically
          renderBoxModel.enableScrollX = true;
          break;
        case CSSOverflowType.clip:
          _scrollableX = null;
          renderBoxModel.clipX = true;
          // overflow clip can't scrolled programmatically
          renderBoxModel.enableScrollX = false;
          break;
        case CSSOverflowType.auto:
        case CSSOverflowType.scroll:
          _scrollableX = KrakenScrollable(axisDirection: AxisDirection.right, scrollListener: scrollListener);
          shouldRepaintSelf = true;
          renderBoxModel.clipX = true;
          renderBoxModel.enableScrollX = true;
          renderBoxModel.scrollOffsetX = _scrollableX.position;
          break;
        case CSSOverflowType.visible:
        default:
          _scrollableX = null;
          renderBoxModel.clipX = false;
          renderBoxModel.enableScrollX = false;
          break;
      }

      switch(overflowY) {
        case CSSOverflowType.hidden:
          _scrollableY = null;
          renderBoxModel.clipY = true;
          // overflow hidden can be scrolled programmatically
          renderBoxModel.enableScrollY = true;
          break;
        case CSSOverflowType.clip:
          _scrollableY = null;
          renderBoxModel.clipY = true;
          // overflow clip can't scrolled programmatically
          renderBoxModel.enableScrollY = false;
          break;
        case CSSOverflowType.auto:
        case CSSOverflowType.scroll:
          _scrollableY = KrakenScrollable(axisDirection: AxisDirection.down, scrollListener: scrollListener);
          shouldRepaintSelf = true;
          renderBoxModel.clipY = true;
          renderBoxModel.enableScrollY = true;
          renderBoxModel.scrollOffsetY = _scrollableY.position;
          break;
        case CSSOverflowType.visible:
        default:
          _scrollableY = null;
          renderBoxModel.clipY = false;
          renderBoxModel.enableScrollY = false;
          break;
      }

      renderBoxModel.scrollListener = scrollListener;
      renderBoxModel.onPointerDown = (PointerDownEvent event) {
        if (_scrollableX != null) {
          _scrollableX.handlePointerDown(event);
        }
        if (_scrollableY != null) {
          _scrollableY.handlePointerDown(event);
        }
      };

      if (renderBoxModel is RenderLayoutBox) {
        RenderObjectWithChildMixin<RenderBox> layoutBoxParent = element.renderLayoutBox.parent;
        RenderLayoutBox newLayoutBox = createRenderLayout(element, repaintSelf: shouldRepaintSelf, prevRenderLayoutBox: renderBoxModel);
        element.renderLayoutBox = newLayoutBox;
        if (layoutBoxParent != null) {
          layoutBoxParent.child = newLayoutBox;
        }

      }
    }
  }

  double get scrollTop {
    if (_scrollableY != null) {
      return _scrollableY.position?.pixels ?? 0;
    }
    return 0.0;
  }
  set scrollTop(double value) {
    _scroll(value, null, isScrollBy: false, isDirectionX: false);
  }

  double get scrollLeft {
    if (_scrollableX != null) {
      return _scrollableX.position?.pixels ?? 0;
    }
    return 0.0;
  }
  set scrollLeft(double value) {
    _scroll(value, null, isScrollBy: false, isDirectionX: true);
  }

  double get scrollHeight {
    return renderBoxModel.hasSize ? renderBoxModel.size.height : 0;
  }

  double get scrollWidth {
    return renderBoxModel.hasSize ? renderBoxModel.size.width : 0;
  }

  void scroll(num x, num y, {bool isScrollBy = false}) {
    _scroll(x, Curves.linear, isScrollBy: isScrollBy, isDirectionX: true);
    _scroll(y, Curves.linear, isScrollBy: isScrollBy, isDirectionX: false);
  }

  void _scroll(num aim, Curve curve, {bool isScrollBy = false, bool isDirectionX = false}) {
    Duration duration;
    KrakenScrollable scrollable;
    if (isDirectionX) {
      scrollable = _scrollableX;
    } else {
      scrollable = _scrollableY;
    }
    if (scrollable != null && aim != null) {
      if (curve != null) {
        double diff = aim - (scrollable.position?.pixels ?? 0);
        duration = Duration(milliseconds: diff.abs().toInt() * 5);
      }
      double distance;
      if (isScrollBy) {
        distance = (scrollable.position?.pixels ?? 0) + aim;
      } else {
        distance = aim.toDouble();
      }
      scrollable.position.moveTo(distance, duration: duration, curve: curve);
    }
  }
}
