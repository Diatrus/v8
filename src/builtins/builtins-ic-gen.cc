// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/ic/accessor-assembler.h"

namespace v8 {
namespace internal {

void Builtins::Generate_LoadIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadIC();
}
void Builtins::Generate_LoadIC_Megamorphic(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadIC_Megamorphic();
}
void Builtins::Generate_LoadIC_Noninlined(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadIC_Noninlined();
}
void Builtins::Generate_LoadIC_NoFeedback(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadIC_NoFeedback();
}
void Builtins::Generate_LoadICTrampoline(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadICTrampoline();
}
void Builtins::Generate_LoadICBaseline(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadICBaseline();
}
void Builtins::Generate_LoadICTrampoline_Megamorphic(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadICTrampoline_Megamorphic();
}
void Builtins::Generate_LoadSuperIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadSuperIC();
}
void Builtins::Generate_LoadSuperICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadSuperICBaseline();
}
void Builtins::Generate_KeyedLoadIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedLoadIC();
}
void Builtins::Generate_KeyedLoadIC_Megamorphic(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedLoadIC_Megamorphic();
}
void Builtins::Generate_KeyedLoadIC_PolymorphicName(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedLoadIC_PolymorphicName();
}
void Builtins::Generate_KeyedLoadICTrampoline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedLoadICTrampoline();
}
void Builtins::Generate_KeyedLoadICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedLoadICBaseline();
}
void Builtins::Generate_KeyedLoadICTrampoline_Megamorphic(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedLoadICTrampoline_Megamorphic();
}
void Builtins::Generate_LoadGlobalIC_NoFeedback(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadGlobalIC_NoFeedback();
}
void Builtins::Generate_StoreGlobalIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateStoreGlobalIC();
}
void Builtins::Generate_StoreGlobalICTrampoline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateStoreGlobalICTrampoline();
}
void Builtins::Generate_StoreGlobalICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateStoreGlobalICBaseline();
}
void Builtins::Generate_StoreIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateStoreIC();
}
void Builtins::Generate_StoreICTrampoline(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateStoreICTrampoline();
}
void Builtins::Generate_StoreICBaseline(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateStoreICBaseline();
}
void Builtins::Generate_KeyedStoreIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedStoreIC();
}
void Builtins::Generate_KeyedStoreICTrampoline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedStoreICTrampoline();
}
void Builtins::Generate_KeyedStoreICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedStoreICBaseline();
}
void Builtins::Generate_StoreInArrayLiteralIC(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateStoreInArrayLiteralIC();
}
void Builtins::Generate_StoreInArrayLiteralICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateStoreInArrayLiteralICBaseline();
}
void Builtins::Generate_CloneObjectIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateCloneObjectIC();
}
void Builtins::Generate_CloneObjectICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateCloneObjectICBaseline();
}
void Builtins::Generate_CloneObjectIC_Slow(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateCloneObjectIC_Slow();
}
void Builtins::Generate_KeyedHasIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedHasIC();
}
void Builtins::Generate_KeyedHasICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedHasICBaseline();
}
void Builtins::Generate_KeyedHasIC_Megamorphic(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedHasIC_Megamorphic();
}
void Builtins::Generate_KeyedHasIC_PolymorphicName(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateKeyedHasIC_PolymorphicName();
}

void Builtins::Generate_LoadGlobalIC(compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadGlobalIC(NOT_INSIDE_TYPEOF);
}

void Builtins::Generate_LoadGlobalICInsideTypeof(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadGlobalIC(INSIDE_TYPEOF);
}

void Builtins::Generate_LoadGlobalICTrampoline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadGlobalICTrampoline(NOT_INSIDE_TYPEOF);
}

void Builtins::Generate_LoadGlobalICInsideTypeofTrampoline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadGlobalICTrampoline(INSIDE_TYPEOF);
}

void Builtins::Generate_LoadGlobalICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadGlobalICBaseline(NOT_INSIDE_TYPEOF);
}

void Builtins::Generate_LoadGlobalICInsideTypeofBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLoadGlobalICBaseline(INSIDE_TYPEOF);
}

void Builtins::Generate_LookupGlobalICBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLookupGlobalICBaseline(NOT_INSIDE_TYPEOF);
}

void Builtins::Generate_LookupGlobalICInsideTypeofBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLookupGlobalICBaseline(INSIDE_TYPEOF);
}

void Builtins::Generate_LookupContextBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLookupContextBaseline(NOT_INSIDE_TYPEOF);
}

void Builtins::Generate_LookupContextInsideTypeofBaseline(
    compiler::CodeAssemblerState* state) {
  AccessorAssembler assembler(state);
  assembler.GenerateLookupContextBaseline(INSIDE_TYPEOF);
}

TF_BUILTIN(DynamicCheckMaps, CodeStubAssembler) {
  auto map = Parameter<Map>(Descriptor::kMap);
  auto slot = UncheckedParameter<IntPtrT>(Descriptor::kSlot);
  auto handler = Parameter<Object>(Descriptor::kHandler);
  TNode<Int32T> status = DynamicCheckMaps(map, slot, handler);
  Return(status);
}

}  // namespace internal
}  // namespace v8
