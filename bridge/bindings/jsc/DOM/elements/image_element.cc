/*
 * Copyright (C) 2020 Alibaba Inc. All rights reserved.
 * Author: Kraken Team.
 */

#include "image_element.h"

namespace kraken::binding::jsc {

JSImageElement *JSImageElement::instance(JSContext *context) {
  static std::unordered_map<JSContext *, JSImageElement *> instanceMap{};
  if (!instanceMap.contains(context)) {
    instanceMap[context] = new JSImageElement(context);
  }
  return instanceMap[context];
}

JSImageElement::JSImageElement(JSContext *context) : JSElement(context) {}
JSObjectRef JSImageElement::instanceConstructor(JSContextRef ctx, JSObjectRef constructor, size_t argumentCount,
                                                const JSValueRef *arguments, JSValueRef *exception) {
  auto instance = new ImageElementInstance(this);
  return instance->object;
}

JSImageElement::ImageElementInstance::ImageElementInstance(JSImageElement *jsAnchorElement)
  : ElementInstance(jsAnchorElement, "img"), nativeImageElement(new NativeImageElement(nativeElement)) {
  JSStringRef tagNameStringRef = JSStringCreateWithUTF8CString("img");
  auto args = buildUICommandArgs(tagNameStringRef);

  foundation::UICommandTaskMessageQueue::instance(_hostClass->context->getContextId())
    ->registerCommand(eventTargetId, UICommandType::createElement, args, 1, nativeImageElement);
}

std::vector<JSStringRef> &JSImageElement::ImageElementInstance::getImageElementPropertyNames() {
  static std::vector<JSStringRef> propertyNames{
    JSStringCreateWithUTF8CString("width"),
    JSStringCreateWithUTF8CString("height"),
    JSStringCreateWithUTF8CString("src"),
    JSStringCreateWithUTF8CString("loading"),
  };
  return propertyNames;
}

const std::unordered_map<std::string, JSImageElement::ImageElementInstance::ImageProperty> &
JSImageElement::ImageElementInstance::getImageElementPropertyMap() {
  static std::unordered_map<std::string, ImageProperty> propertyMap{{"width", ImageProperty::kWidth},
                                                                    {"height", ImageProperty::kHeight},
                                                                    {"src", ImageProperty::kSrc},
                                                                    {"loading", ImageProperty::kLoading}};
  return propertyMap;
}

JSValueRef JSImageElement::ImageElementInstance::getProperty(std::string &name, JSValueRef *exception) {
  auto propertyMap = getImageElementPropertyMap();
  if (propertyMap.contains(name)) {
    auto property = propertyMap[name];
    switch (property) {
    case ImageProperty::kWidth:
      return JSValueMakeNumber(_hostClass->ctx, _width);
    case ImageProperty::kHeight:
      return JSValueMakeNumber(_hostClass->ctx, _height);
    case ImageProperty::kSrc: {
      if (_src == nullptr) return nullptr;
      return JSValueMakeString(_hostClass->ctx, _src);
    }
    case ImageProperty::kLoading: {
      if (_loading == nullptr) return nullptr;
      return JSValueMakeString(_hostClass->ctx, _loading);
    }
    }
  }

  return ElementInstance::getProperty(name, exception);
}

void JSImageElement::ImageElementInstance::setProperty(std::string &name, JSValueRef value, JSValueRef *exception) {
  auto propertyMap = getImageElementPropertyMap();

  if (propertyMap.contains(name)) {
    auto property = propertyMap[name];
    switch (property) {
    case ImageProperty::kWidth: {
      _width = JSValueToNumber(_hostClass->ctx, value, exception);

      auto args = buildUICommandArgs(name, std::to_string(_width));
      foundation::UICommandTaskMessageQueue::instance(_hostClass->contextId)
        ->registerCommand(eventTargetId, UICommandType::setProperty, args, 2, nullptr);
      break;
    }
    case ImageProperty::kHeight: {
      _height = JSValueToNumber(_hostClass->ctx, value, exception);

      auto args = buildUICommandArgs(name, std::to_string(_height));
      foundation::UICommandTaskMessageQueue::instance(_hostClass->contextId)
        ->registerCommand(eventTargetId, UICommandType::setProperty, args, 2, nullptr);
      break;
    }
    case ImageProperty::kSrc: {
      _src = JSValueToStringCopy(_hostClass->ctx, value, exception);
      JSStringRetain(_src);

      auto args = buildUICommandArgs(name, _src);
      foundation::UICommandTaskMessageQueue::instance(_hostClass->contextId)
        ->registerCommand(eventTargetId, UICommandType::setProperty, args, 2, nullptr);
      break;
    }
    case ImageProperty::kLoading: {
      _loading = JSValueToStringCopy(_hostClass->ctx, value, exception);
      JSStringRetain(_loading);

      auto args = buildUICommandArgs(name, _loading);
      foundation::UICommandTaskMessageQueue::instance(_hostClass->contextId)
          ->registerCommand(eventTargetId, UICommandType::setProperty, args, 2, nullptr);
      break;
    }
    default:
      break;
    }
  } else {
    ElementInstance::setProperty(name, value, exception);
  }
}

void JSImageElement::ImageElementInstance::getPropertyNames(JSPropertyNameAccumulatorRef accumulator) {
  ElementInstance::getPropertyNames(accumulator);

  for (auto &property : getImageElementPropertyNames()) {
    JSPropertyNameAccumulatorAddName(accumulator, property);
  }
}

JSImageElement::ImageElementInstance::~ImageElementInstance() {
  delete nativeImageElement;

  if (_src != nullptr) JSStringRelease(_src);
  if (_loading != nullptr) JSStringRelease(_loading);
}

} // namespace kraken::binding::jsc
