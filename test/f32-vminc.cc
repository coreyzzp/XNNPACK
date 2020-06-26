// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-vminc.yaml
//   Generator: tools/generate-vbinary-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/vbinary.h>
#include "vbinaryc-microkernel-tester.h"


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VMINC__NEON_X4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    VBinOpCMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vminc_ukernel__neon_x4, VBinOpCMicrokernelTester::OpType::MinC);
  }

  TEST(F32_VMINC__NEON_X4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__neon_x4, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__NEON_X4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__neon_x4, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__NEON_X4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__neon_x4, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__NEON_X4, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__neon_x4, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VMINC__NEON_X8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VBinOpCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vminc_ukernel__neon_x8, VBinOpCMicrokernelTester::OpType::MinC);
  }

  TEST(F32_VMINC__NEON_X8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__neon_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__NEON_X8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__neon_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__NEON_X8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__neon_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__NEON_X8, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__neon_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VMINC__SSE_X4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE;
    VBinOpCMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vminc_ukernel__sse_x4, VBinOpCMicrokernelTester::OpType::MinC);
  }

  TEST(F32_VMINC__SSE_X4, batch_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__sse_x4, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__SSE_X4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__sse_x4, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__SSE_X4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__sse_x4, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__SSE_X4, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__sse_x4, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VMINC__SSE_X8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE;
    VBinOpCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vminc_ukernel__sse_x8, VBinOpCMicrokernelTester::OpType::MinC);
  }

  TEST(F32_VMINC__SSE_X8, batch_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__sse_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__SSE_X8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__sse_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__SSE_X8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__sse_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__SSE_X8, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__sse_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VMINC__AVX_X8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VBinOpCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vminc_ukernel__avx_x8, VBinOpCMicrokernelTester::OpType::MinC);
  }

  TEST(F32_VMINC__AVX_X8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX_X8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX_X8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX_X8, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__avx_x8, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VMINC__AVX_X16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VBinOpCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vminc_ukernel__avx_x16, VBinOpCMicrokernelTester::OpType::MinC);
  }

  TEST(F32_VMINC__AVX_X16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx_x16, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX_X16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx_x16, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX_X16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx_x16, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX_X16, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__avx_x16, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VMINC__AVX512F_X16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512F;
    VBinOpCMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vminc_ukernel__avx512f_x16, VBinOpCMicrokernelTester::OpType::MinC);
  }

  TEST(F32_VMINC__AVX512F_X16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx512f_x16, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX512F_X16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx512f_x16, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX512F_X16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 17; batch_size < 32; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx512f_x16, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX512F_X16, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__avx512f_x16, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VMINC__AVX512F_X32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512F;
    VBinOpCMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vminc_ukernel__avx512f_x32, VBinOpCMicrokernelTester::OpType::MinC);
  }

  TEST(F32_VMINC__AVX512F_X32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx512f_x32, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX512F_X32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx512f_x32, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX512F_X32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 33; batch_size < 64; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__avx512f_x32, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }

  TEST(F32_VMINC__AVX512F_X32, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__avx512f_x32, VBinOpCMicrokernelTester::OpType::MinC);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if !XNN_ARCH_ASMJS && !XNN_ARCH_WASM && !XNN_COMPILER_MSVC && !XNN_COMPILER_ICC
  TEST(F32_VMINC__PSIMD_X4, batch_eq_4) {
    TEST_REQUIRES_PSIMD;
    VBinOpCMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vminc_ukernel__psimd_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VMINC__PSIMD_X4, batch_div_4) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__psimd_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__PSIMD_X4, batch_lt_4) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__psimd_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__PSIMD_X4, batch_gt_4) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__psimd_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__PSIMD_X4, inplace) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__psimd_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // !XNN_ARCH_ASMJS && !XNN_ARCH_WASM && !XNN_COMPILER_MSVC && !XNN_COMPILER_ICC


#if !XNN_ARCH_ASMJS && !XNN_ARCH_WASM && !XNN_COMPILER_MSVC && !XNN_COMPILER_ICC
  TEST(F32_VMINC__PSIMD_X8, batch_eq_8) {
    TEST_REQUIRES_PSIMD;
    VBinOpCMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vminc_ukernel__psimd_x8, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VMINC__PSIMD_X8, batch_div_8) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__psimd_x8, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__PSIMD_X8, batch_lt_8) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__psimd_x8, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__PSIMD_X8, batch_gt_8) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__psimd_x8, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__PSIMD_X8, inplace) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__psimd_x8, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // !XNN_ARCH_ASMJS && !XNN_ARCH_WASM && !XNN_COMPILER_MSVC && !XNN_COMPILER_ICC


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD
  TEST(F32_VMINC__WASM_X1, batch_eq_1) {
    VBinOpCMicrokernelTester()
      .batch_size(1)
      .Test(xnn_f32_vminc_ukernel__wasm_x1, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VMINC__WASM_X1, batch_gt_1) {
    for (size_t batch_size = 2; batch_size < 10; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__wasm_x1, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__WASM_X1, inplace) {
    for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__wasm_x1, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD
  TEST(F32_VMINC__WASM_X2, batch_eq_2) {
    VBinOpCMicrokernelTester()
      .batch_size(2)
      .Test(xnn_f32_vminc_ukernel__wasm_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VMINC__WASM_X2, batch_div_2) {
    for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__wasm_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__WASM_X2, batch_lt_2) {
    for (size_t batch_size = 1; batch_size < 2; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__wasm_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__WASM_X2, batch_gt_2) {
    for (size_t batch_size = 3; batch_size < 4; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__wasm_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__WASM_X2, inplace) {
    for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__wasm_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD
  TEST(F32_VMINC__WASM_X4, batch_eq_4) {
    VBinOpCMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vminc_ukernel__wasm_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VMINC__WASM_X4, batch_div_4) {
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__wasm_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__WASM_X4, batch_lt_4) {
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__wasm_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__WASM_X4, batch_gt_4) {
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vminc_ukernel__wasm_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VMINC__WASM_X4, inplace) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpCMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vminc_ukernel__wasm_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD


TEST(F32_VMINC__SCALAR_X1, batch_eq_1) {
  VBinOpCMicrokernelTester()
    .batch_size(1)
    .Test(xnn_f32_vminc_ukernel__scalar_x1, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
}

TEST(F32_VMINC__SCALAR_X1, batch_gt_1) {
  for (size_t batch_size = 2; batch_size < 10; batch_size++) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vminc_ukernel__scalar_x1, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VMINC__SCALAR_X1, inplace) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vminc_ukernel__scalar_x1, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}


TEST(F32_VMINC__SCALAR_X2, batch_eq_2) {
  VBinOpCMicrokernelTester()
    .batch_size(2)
    .Test(xnn_f32_vminc_ukernel__scalar_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
}

TEST(F32_VMINC__SCALAR_X2, batch_div_2) {
  for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vminc_ukernel__scalar_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VMINC__SCALAR_X2, batch_lt_2) {
  for (size_t batch_size = 1; batch_size < 2; batch_size++) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vminc_ukernel__scalar_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VMINC__SCALAR_X2, batch_gt_2) {
  for (size_t batch_size = 3; batch_size < 4; batch_size++) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vminc_ukernel__scalar_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VMINC__SCALAR_X2, inplace) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vminc_ukernel__scalar_x2, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}


TEST(F32_VMINC__SCALAR_X4, batch_eq_4) {
  VBinOpCMicrokernelTester()
    .batch_size(4)
    .Test(xnn_f32_vminc_ukernel__scalar_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
}

TEST(F32_VMINC__SCALAR_X4, batch_div_4) {
  for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vminc_ukernel__scalar_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VMINC__SCALAR_X4, batch_lt_4) {
  for (size_t batch_size = 1; batch_size < 4; batch_size++) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vminc_ukernel__scalar_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VMINC__SCALAR_X4, batch_gt_4) {
  for (size_t batch_size = 5; batch_size < 8; batch_size++) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vminc_ukernel__scalar_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VMINC__SCALAR_X4, inplace) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VBinOpCMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vminc_ukernel__scalar_x4, VBinOpCMicrokernelTester::OpType::MinC, VBinOpCMicrokernelTester::Variant::Scalar);
  }
}
