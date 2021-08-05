/*===---- __clang_hip_runtime_wrapper.h - HIP runtime support ---------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * WARNING: This header is intended to be directly -include'd by
 * the compiler and is not supposed to be included by users.
 *
 */

#ifndef __CLANG_HIP_RUNTIME_WRAPPER_H__
#define __CLANG_HIP_RUNTIME_WRAPPER_H__

#if __HIP__

#define __host__ __attribute__((host))
#define __device__ __attribute__((device))
#define __global__ __attribute__((global))
#define __shared__ __attribute__((shared))
#define __constant__ __attribute__((constant))
#define __managed__ __attribute__((managed))

#if !defined(__cplusplus) || __cplusplus < 201103L
  #define nullptr NULL;
#endif

#ifdef __cplusplus
extern "C" {
  __attribute__((__visibility__("default")))
  __attribute__((weak))
  __attribute__((noreturn))
  __device__ void __cxa_pure_virtual(void) {
    __builtin_trap();
  }
  __attribute__((__visibility__("default")))
  __attribute__((weak))
  __attribute__((noreturn))
  __device__ void __cxa_deleted_virtual(void) {
    __builtin_trap();
  }
}
#endif //__cplusplus

#if !defined(__HIPCC_RTC__)
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#else
typedef __SIZE_TYPE__ size_t;
// Define macros which are needed to declare HIP device API's without standard
// C/C++ headers. This is for readability so that these API's can be written
// the same way as non-hipRTC use case. These macros need to be popped so that
// they do not pollute users' name space.
#pragma push_macro("NULL")
#pragma push_macro("uint32_t")
#pragma push_macro("uint64_t")
#pragma push_macro("CHAR_BIT")
#pragma push_macro("INT_MAX")
#define NULL (void *)0
#define uint32_t __UINT32_TYPE__
#define uint64_t __UINT64_TYPE__
#define CHAR_BIT __CHAR_BIT__
#define INT_MAX __INTMAX_MAX__
#endif // __HIPCC_RTC__

typedef __SIZE_TYPE__ __hip_size_t;

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#if __HIP_ENABLE_DEVICE_MALLOC__
__device__ void *__hip_malloc(__hip_size_t __size);
__device__ void *__hip_free(void *__ptr);
__attribute__((weak)) inline __device__ void *malloc(__hip_size_t __size) {
  return __hip_malloc(__size);
}
__attribute__((weak)) inline __device__ void *free(void *__ptr) {
  return __hip_free(__ptr);
}
#else
__attribute__((weak)) inline __device__ void *malloc(__hip_size_t __size) {
  __builtin_trap();
  return (void *)0;
}
__attribute__((weak)) inline __device__ void *free(void *__ptr) {
  __builtin_trap();
  return (void *)0;
}
#endif

#ifdef __cplusplus
} // extern "C"
#endif //__cplusplus

#include <__clang_hip_libdevice_declares.h>
#include <__clang_hip_math.h>

#if defined(__HIPCC_RTC__)
#include <__clang_hip_cmath.h>
#else
#include <__clang_cuda_math_forward_declares.h>
#include <__clang_hip_cmath.h>
#include <__clang_cuda_complex_builtins.h>
#include <algorithm>
#include <complex>
#include <new>
#endif // __HIPCC_RTC__

#define __CLANG_HIP_RUNTIME_WRAPPER_INCLUDED__ 1
#if defined(__HIPCC_RTC__)
#pragma pop_macro("NULL")
#pragma pop_macro("uint32_t")
#pragma pop_macro("uint64_t")
#pragma pop_macro("CHAR_BIT")
#pragma pop_macro("INT_MAX")
#endif // __HIPCC_RTC__
#endif // __HIP__
#endif // __CLANG_HIP_RUNTIME_WRAPPER_H__
