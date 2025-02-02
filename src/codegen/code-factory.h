// Copyright 2012 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_CODEGEN_CODE_FACTORY_H_
#define V8_CODEGEN_CODE_FACTORY_H_

#include "src/codegen/callable.h"
#include "src/codegen/interface-descriptors.h"
#include "src/common/globals.h"
#include "src/objects/type-hints.h"
#include "src/utils/allocation.h"

namespace v8 {
namespace internal {

// For ArrayNoArgumentConstructor and ArraySingleArgumentConstructor.
enum AllocationSiteOverrideMode {
  DONT_OVERRIDE,
  DISABLE_ALLOCATION_SITES,
};

class V8_EXPORT_PRIVATE CodeFactory final {
 public:
  // CEntry has var-args semantics (all the arguments are passed on the
  // stack and the arguments count is passed via register) which currently
  // can't be expressed in CallInterfaceDescriptor. Therefore only the code
  // is exported here.
  static Handle<Code> RuntimeCEntry(Isolate* isolate, int result_size = 1);

  static Handle<Code> CEntry(Isolate* isolate, int result_size = 1,
                             SaveFPRegsMode save_doubles = kDontSaveFPRegs,
                             ArgvMode argv_mode = kArgvOnStack,
                             bool builtin_exit_frame = false);

  // Initial states for ICs.
  static Callable LoadGlobalIC(Isolate* isolate, TypeofMode typeof_mode);
  static Callable LoadGlobalICInOptimizedCode(Isolate* isolate,
                                              TypeofMode typeof_mode);
  static Callable StoreOwnIC(Isolate* isolate);
  static Callable StoreOwnICInOptimizedCode(Isolate* isolate);

  static Callable KeyedStoreIC_SloppyArguments(Isolate* isolate,
                                               KeyedAccessStoreMode mode);
  static Callable ElementsTransitionAndStore(Isolate* isolate,
                                             KeyedAccessStoreMode mode);
  static Callable StoreFastElementIC(Isolate* isolate,
                                     KeyedAccessStoreMode mode);

  static Callable ResumeGenerator(Isolate* isolate);

  static Callable BinaryOperation(Isolate* isolate, Operation op);

  static Callable ApiGetter(Isolate* isolate);
  static Callable CallApiCallback(Isolate* isolate);

  static Callable NonPrimitiveToPrimitive(
      Isolate* isolate, ToPrimitiveHint hint = ToPrimitiveHint::kDefault);
  static Callable OrdinaryToPrimitive(Isolate* isolate,
                                      OrdinaryToPrimitiveHint hint);

  static Callable StringAdd(Isolate* isolate,
                            StringAddFlags flags = STRING_ADD_CHECK_NONE);

  static Callable FastNewFunctionContext(Isolate* isolate,
                                         ScopeType scope_type);

  static Callable Call(Isolate* isolate,
                       ConvertReceiverMode mode = ConvertReceiverMode::kAny);
  static Callable Call_WithFeedback(Isolate* isolate, ConvertReceiverMode mode);
  static Callable CallWithArrayLike(Isolate* isolate);
  static Callable CallWithSpread(Isolate* isolate);
  static Callable CallFunction(
      Isolate* isolate, ConvertReceiverMode mode = ConvertReceiverMode::kAny);
  static Callable CallVarargs(Isolate* isolate);
  static Callable CallForwardVarargs(Isolate* isolate);
  static Callable CallFunctionForwardVarargs(Isolate* isolate);
  static Callable Construct(Isolate* isolate);
  static Callable ConstructWithSpread(Isolate* isolate);
  static Callable ConstructFunction(Isolate* isolate);
  static Callable ConstructVarargs(Isolate* isolate);
  static Callable ConstructForwardVarargs(Isolate* isolate);
  static Callable ConstructFunctionForwardVarargs(Isolate* isolate);

  static Callable InterpreterPushArgsThenCall(Isolate* isolate,
                                              ConvertReceiverMode receiver_mode,
                                              InterpreterPushArgsMode mode);
  static Callable InterpreterPushArgsThenConstruct(
      Isolate* isolate, InterpreterPushArgsMode mode);
  static Callable InterpreterCEntry(Isolate* isolate, int result_size = 1);
  static Callable InterpreterOnStackReplacement(Isolate* isolate);
  static Callable InterpreterOnStackReplacement_ToBaseline(Isolate* isolate);

  static Callable ArrayNoArgumentConstructor(
      Isolate* isolate, ElementsKind kind,
      AllocationSiteOverrideMode override_mode);
  static Callable ArraySingleArgumentConstructor(
      Isolate* isolate, ElementsKind kind,
      AllocationSiteOverrideMode override_mode);
};

}  // namespace internal
}  // namespace v8

#endif  // V8_CODEGEN_CODE_FACTORY_H_
