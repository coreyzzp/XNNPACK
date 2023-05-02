#!/bin/sh
# Copyright 2023 Google LLC
#
# This source code is licensed under the BSD-style license found in the
# LICENSE file in the root directory of this source tree.

#################################### Scalar ###################################
### Generic C micro-kernels
tools/xngen src/f32-gemm/scalar.c.in -D MR=1 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=LINEAR -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x4-scalar.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=1 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=RELU   -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x4-relu-scalar.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=1 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=MINMAX -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x4-minmax-scalar.c &

tools/xngen src/f32-gemm/scalar.c.in -D MR=2 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=LINEAR -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-2x4-scalar.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=2 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=RELU   -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-2x4-relu-scalar.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=2 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=MINMAX -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-2x4-minmax-scalar.c &

tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=2 -D WASM=0 -D INC=0 -D ACTIVATION=LINEAR -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x2-scalar.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=2 -D WASM=0 -D INC=0 -D ACTIVATION=RELU   -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x2-relu-scalar.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=2 -D WASM=0 -D INC=0 -D ACTIVATION=MINMAX -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x2-minmax-scalar.c &

tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=LINEAR -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x4-scalar.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=RELU   -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x4-relu-scalar.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=4 -D WASM=0 -D INC=0 -D ACTIVATION=MINMAX -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x4-minmax-scalar.c &

### WAsm-specific micro-kernels
tools/xngen src/f32-gemm/scalar.c.in -D MR=1 -D NR=4 -D WASM=1 -D INC=0 -D ACTIVATION=RELU   -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x4-relu-wasm.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=2 -D NR=4 -D WASM=1 -D INC=0 -D ACTIVATION=RELU   -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-2x4-relu-wasm.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=2 -D WASM=1 -D INC=0 -D ACTIVATION=RELU   -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x2-relu-wasm.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=4 -D WASM=1 -D INC=0 -D ACTIVATION=RELU   -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x4-relu-wasm.c &

tools/xngen src/f32-gemm/scalar.c.in -D MR=1 -D NR=4 -D WASM=1 -D INC=0 -D ACTIVATION=MINMAX -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x4-minmax-wasm.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=2 -D NR=4 -D WASM=1 -D INC=0 -D ACTIVATION=MINMAX -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-2x4-minmax-wasm.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=2 -D WASM=1 -D INC=0 -D ACTIVATION=MINMAX -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x2-minmax-wasm.c &
tools/xngen src/f32-gemm/scalar.c.in -D MR=4 -D NR=4 -D WASM=1 -D INC=0 -D ACTIVATION=MINMAX -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x4-minmax-wasm.c &

############################### AArch64 assembly ##############################
### LD64 micro-kernels
tools/xngen src/f32-gemm/1x8-aarch64-neonfma-ld64.S.in -D INC=0 -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64.S &
tools/xngen src/f32-gemm/4x8-aarch64-neonfma-ld64.S.in -D INC=0 -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x8-minmax-asm-aarch64-neonfma-ld64.S &
tools/xngen src/f32-gemm/6x8-aarch64-neonfma-ld64.S.in -D INC=0 -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-6x8-minmax-asm-aarch64-neonfma-ld64.S &
tools/xngen src/f32-gemm/4x2-aarch64-neonfma-ld64.S.in -D INC=0 -D DATATYPE=QC8 -o src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x2-minmax-asm-aarch64-neonfma-ld64.S &

################################## Unit tests #################################
tools/generate-gemm-test.py --spec test/f32-qc8w-gemm.yaml        --output test/f32-qc8w-gemm.cc        &
tools/generate-gemm-test.py --spec test/f32-qc8w-gemm-relu.yaml   --output test/f32-qc8w-gemm-relu.cc   &
tools/generate-gemm-test.py --spec test/f32-qc8w-gemm-minmax.yaml --output test/f32-qc8w-gemm-minmax.cc &

wait