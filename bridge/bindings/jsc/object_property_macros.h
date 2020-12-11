#define OBJECT_PROPERTY(name, ...) name{__VA_ARGS__}
#define OBJECT_PROPERTY_ITEM(NAME, KEY)                                                                                \
  { #KEY, NAME##Property::KEY }

#define OBJECT_PROPERTY_ITEM_1(NAME, _1) OBJECT_PROPERTY_ITEM(NAME, _1),
#define OBJECT_PROPERTY_ITEM_2(NAME, _1, _2) OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2),
#define OBJECT_PROPERTY_ITEM_3(NAME, _1, _2, _3)                                                                       \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),
#define OBJECT_PROPERTY_ITEM_4(NAME, _1, _2, _3, _4)                                                                   \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4)
#define OBJECT_PROPERTY_ITEM_5(NAME, _1, _2, _3, _4, _5)                                                               \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5)
#define OBJECT_PROPERTY_ITEM_6(NAME, _1, _2, _3, _4, _5, _6)                                                           \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6)
#define OBJECT_PROPERTY_ITEM_7(NAME, _1, _2, _3, _4, _5, _6, _7)                                                       \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7)
#define OBJECT_PROPERTY_ITEM_8(NAME, _1, _2, _3, _4, _5, _6, _7, _8)                                                   \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8)
#define OBJECT_PROPERTY_ITEM_9(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9)                                               \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9)
#define OBJECT_PROPERTY_ITEM_10(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10)                                         \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10)
#define OBJECT_PROPERTY_ITEM_11(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11)                                    \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11)
#define OBJECT_PROPERTY_ITEM_12(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12)                                    \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12)
#define OBJECT_PROPERTY_ITEM_13(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12, _13)                               \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12),                 \
    OBJECT_PROPERTY_ITEM(NAME, _13)
#define OBJECT_PROPERTY_ITEM_14(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12, _13, _14)                          \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12),                 \
    OBJECT_PROPERTY_ITEM(NAME, _13), OBJECT_PROPERTY_ITEM(NAME, _14)
#define OBJECT_PROPERTY_ITEM_15(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12, _13, _14, _15)                     \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12),                 \
    OBJECT_PROPERTY_ITEM(NAME, _13), OBJECT_PROPERTY_ITEM(NAME, _14), OBJECT_PROPERTY_ITEM(NAME, _15)
#define OBJECT_PROPERTY_ITEM_16(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12, _13, _14, _15, _16)                \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12),                 \
    OBJECT_PROPERTY_ITEM(NAME, _13), OBJECT_PROPERTY_ITEM(NAME, _14), OBJECT_PROPERTY_ITEM(NAME, _15),                 \
    OBJECT_PROPERTY_ITEM(NAME, _16)
#define OBJECT_PROPERTY_ITEM_17(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12, _13, _14, _15, _16, _17)           \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12),                 \
    OBJECT_PROPERTY_ITEM(NAME, _13), OBJECT_PROPERTY_ITEM(NAME, _14), OBJECT_PROPERTY_ITEM(NAME, _15),                 \
    OBJECT_PROPERTY_ITEM(NAME, _16), OBJECT_PROPERTY_ITEM(NAME, _17)
#define OBJECT_PROPERTY_ITEM_18(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12, _13, _14, _15, _16, _17, _18)      \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12),                 \
    OBJECT_PROPERTY_ITEM(NAME, _13), OBJECT_PROPERTY_ITEM(NAME, _14), OBJECT_PROPERTY_ITEM(NAME, _15),                 \
    OBJECT_PROPERTY_ITEM(NAME, _16), OBJECT_PROPERTY_ITEM(NAME, _17), OBJECT_PROPERTY_ITEM(NAME, _18)
#define OBJECT_PROPERTY_ITEM_19(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12, _13, _14, _15, _16, _17, _18, _19) \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12),                 \
    OBJECT_PROPERTY_ITEM(NAME, _13), OBJECT_PROPERTY_ITEM(NAME, _14), OBJECT_PROPERTY_ITEM(NAME, _15),                 \
    OBJECT_PROPERTY_ITEM(NAME, _16), OBJECT_PROPERTY_ITEM(NAME, _17), OBJECT_PROPERTY_ITEM(NAME, _18),                 \
    OBJECT_PROPERTY_ITEM(NAME, _19),
#define OBJECT_PROPERTY_ITEM_20(NAME, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _12, _13, _14, _15, _16, _17, _18, _19, \
                                _20)                                                                                   \
  OBJECT_PROPERTY_ITEM(NAME, _1), OBJECT_PROPERTY_ITEM(NAME, _2), OBJECT_PROPERTY_ITEM(NAME, _3),                      \
    OBJECT_PROPERTY_ITEM(NAME, _4), OBJECT_PROPERTY_ITEM(NAME, _5), OBJECT_PROPERTY_ITEM(NAME, _6),                    \
    OBJECT_PROPERTY_ITEM(NAME, _7), OBJECT_PROPERTY_ITEM(NAME, _8), OBJECT_PROPERTY_ITEM(NAME, _9),                    \
    OBJECT_PROPERTY_ITEM(NAME, _10), OBJECT_PROPERTY_ITEM(NAME, _11), OBJECT_PROPERTY_ITEM(NAME, _12),                 \
    OBJECT_PROPERTY_ITEM(NAME, _13), OBJECT_PROPERTY_ITEM(NAME, _14), OBJECT_PROPERTY_ITEM(NAME, _15),                 \
    OBJECT_PROPERTY_ITEM(NAME, _16), OBJECT_PROPERTY_ITEM(NAME, _17), OBJECT_PROPERTY_ITEM(NAME, _18),                 \
    OBJECT_PROPERTY_ITEM(NAME, _19), OBJECT_PROPERTY_ITEM(NAME, _20),

#define OBJECT_PROPERTY_MAP_FUNCTION(NAME, ARGS_COUNT, ...)                                                            \
  static std::unordered_map<std::string, NAME##Property> &get##NAME##PropertyMap() {                                   \
    static std::unordered_map<std::string, NAME##Property> propertyMap{                                                \
      OBJECT_PROPERTY_ITEM_##ARGS_COUNT(NAME, __VA_ARGS__)};                                                           \
    return propertyMap;                                                                                                \
  };

#define OBJECT_PROPERTY_NAME(KEY) JSStringCreateWithUTF8CString(#KEY)
#define OBJECT_PROPERTY_NAME_1(_1) OBJECT_PROPERTY_NAME(_1)
#define OBJECT_PROPERTY_NAME_2(_1, _2) OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2)
#define OBJECT_PROPERTY_NAME_3(_1, _2, _3) OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3)
#define OBJECT_PROPERTY_NAME_4(_1, _2, _3, _4)                                                                         \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),
#define OBJECT_PROPERTY_NAME_5(_1, _2, _3, _4, _5)                                                                     \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5),
#define OBJECT_PROPERTY_NAME_6(_1, _2, _3, _4, _5, _6)                                                                 \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6),
#define OBJECT_PROPERTY_NAME_7(_1, _2, _3, _4, _5, _6, _7)                                                             \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7),
#define OBJECT_PROPERTY_NAME_8(_1, _2, _3, _4, _5, _6, _7, _8)                                                         \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),
#define OBJECT_PROPERTY_NAME_9(_1, _2, _3, _4, _5, _6, _7, _8, _9)                                                     \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9),
#define OBJECT_PROPERTY_NAME_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10)                                               \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10),
#define OBJECT_PROPERTY_NAME_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11)                                          \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11),
#define OBJECT_PROPERTY_NAME_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12)                                     \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),
#define OBJECT_PROPERTY_NAME_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13)                                \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),         \
    OBJECT_PROPERTY_NAME(_13),
#define OBJECT_PROPERTY_NAME_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14)                           \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),         \
    OBJECT_PROPERTY_NAME(_13), OBJECT_PROPERTY_NAME(_14),
#define OBJECT_PROPERTY_NAME_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15)                      \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),         \
    OBJECT_PROPERTY_NAME(_13), OBJECT_PROPERTY_NAME(_14), OBJECT_PROPERTY_NAME(_15),
#define OBJECT_PROPERTY_NAME_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16)                 \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),         \
    OBJECT_PROPERTY_NAME(_13), OBJECT_PROPERTY_NAME(_14), OBJECT_PROPERTY_NAME(_15), OBJECT_PROPERTY_NAME(_16),
#define OBJECT_PROPERTY_NAME_17(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17)            \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),         \
    OBJECT_PROPERTY_NAME(_13), OBJECT_PROPERTY_NAME(_14), OBJECT_PROPERTY_NAME(_15), OBJECT_PROPERTY_NAME(_16),        \
    OBJECT_PROPERTY_NAME(_17),
#define OBJECT_PROPERTY_NAME_18(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18)       \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),         \
    OBJECT_PROPERTY_NAME(_13), OBJECT_PROPERTY_NAME(_14), OBJECT_PROPERTY_NAME(_15), OBJECT_PROPERTY_NAME(_16),        \
    OBJECT_PROPERTY_NAME(_17), OBJECT_PROPERTY_NAME(_18),
#define OBJECT_PROPERTY_NAME_19(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19)  \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),         \
    OBJECT_PROPERTY_NAME(_13), OBJECT_PROPERTY_NAME(_14), OBJECT_PROPERTY_NAME(_15), OBJECT_PROPERTY_NAME(_16),        \
    OBJECT_PROPERTY_NAME(_17), OBJECT_PROPERTY_NAME(_18), OBJECT_PROPERTY_NAME(_19),
#define OBJECT_PROPERTY_NAME_20(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19,  \
                                _20)                                                                                   \
  OBJECT_PROPERTY_NAME(_1), OBJECT_PROPERTY_NAME(_2), OBJECT_PROPERTY_NAME(_3), OBJECT_PROPERTY_NAME(_4),              \
    OBJECT_PROPERTY_NAME(_5), OBJECT_PROPERTY_NAME(_6), OBJECT_PROPERTY_NAME(_7), OBJECT_PROPERTY_NAME(_8),            \
    OBJECT_PROPERTY_NAME(_9), OBJECT_PROPERTY_NAME(_10), OBJECT_PROPERTY_NAME(_11), OBJECT_PROPERTY_NAME(_12),         \
    OBJECT_PROPERTY_NAME(_13), OBJECT_PROPERTY_NAME(_14), OBJECT_PROPERTY_NAME(_15), OBJECT_PROPERTY_NAME(_16),        \
    OBJECT_PROPERTY_NAME(_17), OBJECT_PROPERTY_NAME(_18), OBJECT_PROPERTY_NAME(_19), OBJECT_PROPERTY_NAME(_20),

#define OBJECT_PROPERTY_NAME_FUNCTION(NAME, ARGS_COUNT, ...)                                                           \
  static std::vector<JSStringRef> &get##NAME##PropertyNames() {                                                        \
    static std::vector<JSStringRef> propertyNames{OBJECT_PROPERTY_NAME_##ARGS_COUNT(__VA_ARGS__)};                     \
    return propertyNames;                                                                                              \
  }

#define DEFINE_OBJECT_PROPERTY(NAME, ARGS_COUNT, ...)                                                                  \
  enum class OBJECT_PROPERTY(NAME##Property, __VA_ARGS__);                                                             \
  OBJECT_PROPERTY_MAP_FUNCTION(NAME, ARGS_COUNT, __VA_ARGS__);                                                         \
  OBJECT_PROPERTY_NAME_FUNCTION(NAME, ARGS_COUNT, __VA_ARGS__)
