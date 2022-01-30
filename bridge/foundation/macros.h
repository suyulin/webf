/*
 * Copyright (C) 2019 Alibaba Inc. All rights reserved.
 * Author: Kraken Team.
 */

#ifndef KRAKENBRIDGE_MACROS_H
#define KRAKENBRIDGE_MACROS_H

#if defined(__GNUC__) || defined(__clang__)
#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#define FORCE_INLINE inline __attribute__((always_inline))
#else
#define LIKELY(x) (x)
#define UNLIKELY(x) (x)
#define FORCE_INLINE inline
#endif

#define assert_m(exp, msg) assert(((void)msg, exp))

#define KRAKEN_DISALLOW_COPY(TypeName) TypeName(const TypeName&) = delete

#define KRAKEN_DISALLOW_ASSIGN(TypeName) TypeName& operator=(const TypeName&) = delete

#define KRAKEN_DISALLOW_MOVE(TypeName) \
  TypeName(TypeName&&) = delete;       \
  TypeName& operator=(TypeName&&) = delete

#define KRAKEN_DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&) = delete;             \
  TypeName& operator=(const TypeName&) = delete

#define KRAKEN_DISALLOW_COPY_ASSIGN_AND_MOVE(TypeName) \
  TypeName(const TypeName&) = delete;                  \
  TypeName(TypeName&&) = delete;                       \
  TypeName& operator=(const TypeName&) = delete;       \
  TypeName& operator=(TypeName&&) = delete

#define KRAKEN_DISALLOW_IMPLICIT_CONSTRUCTORS(TypeName) \
  TypeName() = delete;                                  \
  KRAKEN_DISALLOW_COPY_ASSIGN_AND_MOVE(TypeName)

#endif  // KRAKENBRIDGE_MACROS_H
