
#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
    /* 0 */ 168,
    /* 1 */ 178,
    /* 2 */ 179,
    /* 3 */ 180,
    /* 4 */ 181,
    /* 5 */ 182,
    /* 6 */ 183,
    /* 7 */ 184,
    /* 8 */ 185,
    /* 9 */ 186,
    /* 10 */ 189,
    /* 11 */ 240,
    /* 12 */ 241,
    /* 13 */ 242,
    /* 14 */ 261,
    /* 15 */ 262,
    /* 16 */ 263,
    /* 17 */ 272,
    /* 18 */ 273,
    /* 19 */ 274,
    /* 20 */ 369,
    /* 21 */ 372,
    /* 22 */ 407,
    /* 23 */ 408,
    /* 24 */ 409,
    /* 25 */ 412,
    /* 26 */ 414,
    /* 27 */ 418,
    /* 28 */ 420,
    /* 29 */ 425,
    /* 30 */ 433,
    /* 31 */ 434,
    /* 32 */ 435,
    /* 33 */ 509,
    /* 34 */ 516,
    /* 35 */ 517,
    /* 36 */ 521,
    /* 37 */ 573,
    /* 38 */ 579,
    /* 39 */ 582,
    /* 40 */ 584,
    /* 41 */ 589,
    /* 42 */ 590,
    /* 43 */ 592,
    /* 44 */ 593,
    /* 45 */ 597,
    /* 46 */ 598,
    /* 47 */ 600,
    /* 48 */ 601,
    /* 49 */ 604,
    /* 50 */ 605,
    /* 51 */ 606,
    /* 52 */ 609,
    /* 53 */ 612,
    /* 54 */ 614,
    /* 55 */ 616,
    /* 56 */ 625,
    /* 57 */ 679,
    /* 58 */ 681,
    /* 59 */ 683,
    /* 60 */ 693,
    /* 61 */ 694,
    /* 62 */ 695,
    /* 63 */ 697,
    /* 64 */ 700,
    /* 65 */ 701,
    /* 66 */ 702,
    /* 67 */ 703,
    /* 68 */ 710,
    /* 69 */ 711,
    /* 70 */ 712,
    /* 71 */ 716,
    /* 72 */ 717,
    /* 73 */ 719,
    /* 74 */ 899,
    /* 75 */ 1048,
    /* 76 */ 1049,
    /* 77 */ 6055,
    /* 78 */ 6056,
    /* 79 */ 6058,
    /* 80 */ 6059,
    /* 81 */ 6060,
    /* 82 */ 6061,
    /* 83 */ 6062,
    /* 84 */ 6064,
    /* 85 */ 6065,
    /* 86 */ 6066,
    /* 87 */ 6067,
    /* 88 */ 6083,
    /* 89 */ 6085,
    /* 90 */ 6090,
    /* 91 */ 6092,
    /* 92 */ 6094,
    /* 93 */ 6096,
    /* 94 */ 6148,
    /* 95 */ 6149,
    /* 96 */ 6151,
    /* 97 */ 6152,
    /* 98 */ 6153,
    /* 99 */ 6154,
    /* 100 */ 6155,
    /* 101 */ 6157,
    /* 102 */ 6159,
    /* 103 */ 7010,
    /* 104 */ 7013,
    /* 105 */ 7015,
    /* 106 */ 7016,
    /* 107 */ 7017,
    /* 108 */ 7438,
    /* 109 */ 7439,
    /* 110 */ 7440,
    /* 111 */ 7441,
    /* 112 */ 7458,
    /* 113 */ 7459,
    /* 114 */ 7460,
    /* 115 */ 7580,
    /* 116 */ 7590,
    /* 117 */ 7591,
    /* 118 */ 7592,
    /* 119 */ 7593,
    /* 120 */ 7594,
    /* 121 */ 7883,
    /* 122 */ 7884,
    /* 123 */ 7886,
    /* 124 */ 7887,
    /* 125 */ 7911,
    /* 126 */ 7925,
    /* 127 */ 7931,
    /* 128 */ 7938,
    /* 129 */ 7949,
    /* 130 */ 7952,
    /* 131 */ 7968,
    /* 132 */ 8041,
    /* 133 */ 8043,
    /* 134 */ 8044,
    /* 135 */ 8050,
    /* 136 */ 8058,
    /* 137 */ 8076,
    /* 138 */ 8077,
    /* 139 */ 8085,
    /* 140 */ 8087,
    /* 141 */ 8093,
    /* 142 */ 8094,
    /* 143 */ 8097,
    /* 144 */ 8101,
    /* 145 */ 8107,
    /* 146 */ 8108,
    /* 147 */ 8115,
    /* 148 */ 8117,
    /* 149 */ 8128,
    /* 150 */ 8131,
    /* 151 */ 8132,
    /* 152 */ 8133,
    /* 153 */ 8143,
    /* 154 */ 8152,
    /* 155 */ 8158,
    /* 156 */ 8159,
    /* 157 */ 8160,
    /* 158 */ 8162,
    /* 159 */ 8163,
    /* 160 */ 8179,
    /* 161 */ 8181,
    /* 162 */ 8194,
    /* 163 */ 8212,
    /* 164 */ 8213,
    /* 165 */ 8238,
    /* 166 */ 8264,
    /* 167 */ 8265,
    /* 168 */ 8666,
    /* 169 */ 8737,
    /* 170 */ 8738,
    /* 171 */ 8873,
    /* 172 */ 8874,
    /* 173 */ 8879,
    /* 174 */ 8882,
    /* 175 */ 8927,
    /* 176 */ 9157,
    /* 177 */ 9158,
    /* 178 */ 9824,
    /* 179 */ 9828,
    /* 180 */ 9838,
    /* 181 */ 9886,
    /* 182 */ 9887,
    /* 183 */ 9888,
    /* 184 */ 9889,
    /* 185 */ 10405,
    /* 186 */ 10426,
    /* 187 */ 10428,
    /* 188 */ 10430
};

void ves_icall_System_Array_InternalCreate (int, int, int, int, int); 
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int); 
int ves_icall_System_Array_IsValueOfElementTypeInternal (int, int); 
int ves_icall_System_Array_CanChangePrimitive (int, int, int); 
int ves_icall_System_Array_FastCopy (int, int, int, int, int); 
int ves_icall_System_Array_GetLengthInternal_raw (int, int, int); 
int ves_icall_System_Array_GetLowerBoundInternal_raw (int, int, int); 
void ves_icall_System_Array_GetGenericValue_icall (int, int, int); 
void ves_icall_System_Array_GetValueImpl_raw (int, int, int, int); 
void ves_icall_System_Array_SetGenericValue_icall (int, int, int); 
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int, int, int, int); 
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int, int); 
void ves_icall_System_Runtime_RuntimeImports_Memmove (int, int, int); 
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int, int, int, int); 
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int, int); 
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int, int, int, int, int); 
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int, int); 
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int, int, int, int); 
int ves_icall_System_Enum_InternalGetCorElementType (int); 
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int, int, int); 
int ves_icall_System_Environment_get_ProcessorCount (); 
void ves_icall_System_Environment_FailFast_raw (int, int, int, int); 
void ves_icall_System_GC_InternalCollect (int); 
void ves_icall_System_GC_register_ephemeron_array_raw (int, int); 
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int); 
void ves_icall_System_GC_SuppressFinalize_raw (int, int); 
void ves_icall_System_GC_ReRegisterForFinalize_raw (int, int); 
void ves_icall_System_GC_GetGCMemoryInfo (int, int, int, int, int, int); 
int ves_icall_System_GC_AllocPinnedArray_raw (int, int, int); 
int ves_icall_System_Object_MemberwiseClone_raw (int, int); 
double ves_icall_System_Math_Ceiling (double); 
double ves_icall_System_Math_Sqrt (double); 
double ves_icall_System_Math_ModF (double, int); 
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int, int); 
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int, int, int); 
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int, int, int, int); 
void ves_icall_RuntimeType_GetParentType_raw (int, int, int); 
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int, int, int); 
void ves_icall_RuntimeType_make_array_type_raw (int, int, int, int); 
void ves_icall_RuntimeType_make_byref_type_raw (int, int, int); 
void ves_icall_RuntimeType_make_pointer_type_raw (int, int, int); 
void ves_icall_RuntimeType_MakeGenericType_raw (int, int, int, int); 
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int, int, int, int, int); 
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int, int, int, int, int); 
int ves_icall_RuntimeType_GetConstructors_native_raw (int, int, int); 
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int, int); 
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int, int, int); 
void ves_icall_System_RuntimeType_getFullName_raw (int, int, int, int, int); 
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int, int, int, int); 
int ves_icall_RuntimeType_GetGenericParameterPosition (int); 
int ves_icall_RuntimeType_GetEvents_native_raw (int, int, int, int); 
int ves_icall_RuntimeType_GetFields_native_raw (int, int, int, int, int); 
void ves_icall_RuntimeType_GetInterfaces_raw (int, int, int); 
void ves_icall_RuntimeType_GetDeclaringType_raw (int, int, int); 
void ves_icall_RuntimeType_GetName_raw (int, int, int); 
void ves_icall_RuntimeType_GetNamespace_raw (int, int, int); 
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int, int); 
int ves_icall_RuntimeTypeHandle_GetAttributes (int); 
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int, int); 
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_GetCorElementType (int); 
int ves_icall_RuntimeTypeHandle_HasInstantiation (int); 
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int, int); 
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int, int); 
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int, int, int); 
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int, int, int); 
void ves_icall_RuntimeTypeHandle_GetModule_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int); 
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int, int); 
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int, int); 
int ves_icall_System_String_FastAllocateString_raw (int, int); 
int ves_icall_System_Type_internal_from_handle_raw (int, int); 
int ves_icall_System_ValueType_InternalGetHashCode_raw (int, int, int); 
int ves_icall_System_ValueType_Equals_raw (int, int, int, int); 
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int, int, int); 
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int, int, int, int); 
int ves_icall_System_Threading_Interlocked_Decrement_Int (int); 
int ves_icall_System_Threading_Interlocked_Increment_Int (int); 
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int); 
int ves_icall_System_Threading_Interlocked_Exchange_Int (int, int); 
void ves_icall_System_Threading_Interlocked_Exchange_Object (int, int, int); 
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int, int64_t, int64_t); 
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int, int64_t); 
int ves_icall_System_Threading_Interlocked_Add_Int (int, int); 
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int, int64_t); 
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int, int); 
void mono_monitor_exit_icall_raw (int, int); 
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int, int); 
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int, int); 
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int, int, int, int); 
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int, int, int, int, int); 
void ves_icall_System_Threading_Thread_InitInternal_raw (int, int); 
int ves_icall_System_Threading_Thread_GetCurrentThread (); 
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int, int); 
int ves_icall_System_Threading_Thread_GetState_raw (int, int); 
void ves_icall_System_Threading_Thread_SetState_raw (int, int, int); 
void ves_icall_System_Threading_Thread_ClrState_raw (int, int, int); 
void ves_icall_System_Threading_Thread_SetName_icall_raw (int, int, int, int); 
int ves_icall_System_Threading_Thread_YieldInternal (); 
void ves_icall_System_Threading_Thread_SetPriority_raw (int, int, int); 
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int, int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int, int, int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int, int, int, int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int, int, int, int, int, int); 
int ves_icall_System_GCHandle_InternalAlloc_raw (int, int, int); 
void ves_icall_System_GCHandle_InternalFree_raw (int, int); 
int ves_icall_System_GCHandle_InternalGet_raw (int, int); 
void ves_icall_System_GCHandle_InternalSet_raw (int, int, int); 
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError (); 
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int); 
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int, int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int, int); 
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int, int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack (); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int, int, int); 
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int, int); 
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int); 
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int, int, int, int); 
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int, int, int, int, int, int); 
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int); 
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int, int, int, int); 
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int, int); 
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int, int, int); 
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int, int, int); 
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int, int); 
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int); 
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int, int, int, int); 
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int, int, int); 
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int, int, int); 
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int, int, int, int, int, int, int); 
void ves_icall_RuntimeEventInfo_get_event_info_raw (int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int, int, int); 
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int, int); 
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int, int, int); 
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int, int); 
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int, int, int); 
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
void ves_icall_get_method_info_raw (int, int, int); 
int ves_icall_get_method_attributes (int); 
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int, int, int); 
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int, int); 
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int, int, int, int); 
int ves_icall_RuntimeMethodInfo_get_name_raw (int, int); 
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
int ves_icall_InternalInvoke_raw (int, int, int, int, int); 
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int, int, int, int, int); 
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int, int, int); 
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int, int); 
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int, int); 
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int, int); 
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int, int); 
void ves_icall_InvokeClassConstructor_raw (int, int); 
int ves_icall_InternalInvoke_raw (int, int, int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int, int); 
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int, int, int, int, int, int); 
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int, int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int, int, int); 
void ves_icall_DynamicMethod_create_dynamic_method_raw (int, int, int, int, int); 
void ves_icall_AssemblyBuilder_basic_init_raw (int, int); 
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int, int); 
void ves_icall_ModuleBuilder_basic_init_raw (int, int); 
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int, int, int); 
int ves_icall_ModuleBuilder_getToken_raw (int, int, int, int); 
void ves_icall_ModuleBuilder_RegisterToken_raw (int, int, int, int); 
int ves_icall_TypeBuilder_create_runtime_class_raw (int, int); 
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int, int); 
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int, int); 
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal (); 
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int, int, int, int, int, int, int, int); 
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int, int, int, int); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStart (int, int, int, int, uint64_t); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStop (int, int, double); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart (int, int, int); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop (int); 
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int); 
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int); 
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int); 
void ves_icall_Mono_SafeStringMarshal_GFree (int);

static void *corlib_icall_funcs [] = {
    /* 0:168 */ ves_icall_System_Array_InternalCreate,
    /* 1:178 */ ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
    /* 2:179 */ ves_icall_System_Array_IsValueOfElementTypeInternal,
    /* 3:180 */ ves_icall_System_Array_CanChangePrimitive,
    /* 4:181 */ ves_icall_System_Array_FastCopy,
    /* 5:182 */ ves_icall_System_Array_GetLengthInternal_raw,
    /* 6:183 */ ves_icall_System_Array_GetLowerBoundInternal_raw,
    /* 7:184 */ ves_icall_System_Array_GetGenericValue_icall,
    /* 8:185 */ ves_icall_System_Array_GetValueImpl_raw,
    /* 9:186 */ ves_icall_System_Array_SetGenericValue_icall,
    /* 10:189 */ ves_icall_System_Array_SetValueRelaxedImpl_raw,
    /* 11:240 */ ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
    /* 12:241 */ ves_icall_System_Runtime_RuntimeImports_Memmove,
    /* 13:242 */ ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
    /* 14:261 */ ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
    /* 15:262 */ ves_icall_System_Delegate_CreateDelegate_internal_raw,
    /* 16:263 */ ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
    /* 17:272 */ ves_icall_System_Enum_GetEnumValuesAndNames_raw,
    /* 18:273 */ ves_icall_System_Enum_InternalGetCorElementType,
    /* 19:274 */ ves_icall_System_Enum_InternalGetUnderlyingType_raw,
    /* 20:369 */ ves_icall_System_Environment_get_ProcessorCount,
    /* 21:372 */ ves_icall_System_Environment_FailFast_raw,
    /* 22:407 */ ves_icall_System_GC_InternalCollect,
    /* 23:408 */ ves_icall_System_GC_register_ephemeron_array_raw,
    /* 24:409 */ ves_icall_System_GC_get_ephemeron_tombstone_raw,
    /* 25:412 */ ves_icall_System_GC_SuppressFinalize_raw,
    /* 26:414 */ ves_icall_System_GC_ReRegisterForFinalize_raw,
    /* 27:418 */ ves_icall_System_GC_GetGCMemoryInfo,
    /* 28:420 */ ves_icall_System_GC_AllocPinnedArray_raw,
    /* 29:425 */ ves_icall_System_Object_MemberwiseClone_raw,
    /* 30:433 */ ves_icall_System_Math_Ceiling,
    /* 31:434 */ ves_icall_System_Math_Sqrt,
    /* 32:435 */ ves_icall_System_Math_ModF,
    /* 33:509 */ ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
    /* 34:516 */ ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
    /* 35:517 */ ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
    /* 36:521 */ ves_icall_RuntimeType_GetParentType_raw,
    /* 37:573 */ ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
    /* 38:579 */ ves_icall_RuntimeType_make_array_type_raw,
    /* 39:582 */ ves_icall_RuntimeType_make_byref_type_raw,
    /* 40:584 */ ves_icall_RuntimeType_make_pointer_type_raw,
    /* 41:589 */ ves_icall_RuntimeType_MakeGenericType_raw,
    /* 42:590 */ ves_icall_RuntimeType_GetMethodsByName_native_raw,
    /* 43:592 */ ves_icall_RuntimeType_GetPropertiesByName_native_raw,
    /* 44:593 */ ves_icall_RuntimeType_GetConstructors_native_raw,
    /* 45:597 */ ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
    /* 46:598 */ ves_icall_RuntimeType_GetDeclaringMethod_raw,
    /* 47:600 */ ves_icall_System_RuntimeType_getFullName_raw,
    /* 48:601 */ ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
    /* 49:604 */ ves_icall_RuntimeType_GetGenericParameterPosition,
    /* 50:605 */ ves_icall_RuntimeType_GetEvents_native_raw,
    /* 51:606 */ ves_icall_RuntimeType_GetFields_native_raw,
    /* 52:609 */ ves_icall_RuntimeType_GetInterfaces_raw,
    /* 53:612 */ ves_icall_RuntimeType_GetDeclaringType_raw,
    /* 54:614 */ ves_icall_RuntimeType_GetName_raw,
    /* 55:616 */ ves_icall_RuntimeType_GetNamespace_raw,
    /* 56:625 */ ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
    /* 57:679 */ ves_icall_RuntimeTypeHandle_GetAttributes,
    /* 58:681 */ ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
    /* 59:683 */ ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
    /* 60:693 */ ves_icall_RuntimeTypeHandle_GetCorElementType,
    /* 61:694 */ ves_icall_RuntimeTypeHandle_HasInstantiation,
    /* 62:695 */ ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
    /* 63:697 */ ves_icall_RuntimeTypeHandle_HasReferences_raw,
    /* 64:700 */ ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
    /* 65:701 */ ves_icall_RuntimeTypeHandle_GetAssembly_raw,
    /* 66:702 */ ves_icall_RuntimeTypeHandle_GetElementType_raw,
    /* 67:703 */ ves_icall_RuntimeTypeHandle_GetModule_raw,
    /* 68:710 */ ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
    /* 69:711 */ ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
    /* 70:712 */ ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
    /* 71:716 */ ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
    /* 72:717 */ ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
    /* 73:719 */ ves_icall_System_String_FastAllocateString_raw,
    /* 74:899 */ ves_icall_System_Type_internal_from_handle_raw,
    /* 75:1048 */ ves_icall_System_ValueType_InternalGetHashCode_raw,
    /* 76:1049 */ ves_icall_System_ValueType_Equals_raw,
    /* 77:6055 */ ves_icall_System_Threading_Interlocked_CompareExchange_Int,
    /* 78:6056 */ ves_icall_System_Threading_Interlocked_CompareExchange_Object,
    /* 79:6058 */ ves_icall_System_Threading_Interlocked_Decrement_Int,
    /* 80:6059 */ ves_icall_System_Threading_Interlocked_Increment_Int,
    /* 81:6060 */ ves_icall_System_Threading_Interlocked_Increment_Long,
    /* 82:6061 */ ves_icall_System_Threading_Interlocked_Exchange_Int,
    /* 83:6062 */ ves_icall_System_Threading_Interlocked_Exchange_Object,
    /* 84:6064 */ ves_icall_System_Threading_Interlocked_CompareExchange_Long,
    /* 85:6065 */ ves_icall_System_Threading_Interlocked_Exchange_Long,
    /* 86:6066 */ ves_icall_System_Threading_Interlocked_Add_Int,
    /* 87:6067 */ ves_icall_System_Threading_Interlocked_Add_Long,
    /* 88:6083 */ ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
    /* 89:6085 */ mono_monitor_exit_icall_raw,
    /* 90:6090 */ ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
    /* 91:6092 */ ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
    /* 92:6094 */ ves_icall_System_Threading_Monitor_Monitor_wait_raw,
    /* 93:6096 */ ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
    /* 94:6148 */ ves_icall_System_Threading_Thread_InitInternal_raw,
    /* 95:6149 */ ves_icall_System_Threading_Thread_GetCurrentThread,
    /* 96:6151 */ ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
    /* 97:6152 */ ves_icall_System_Threading_Thread_GetState_raw,
    /* 98:6153 */ ves_icall_System_Threading_Thread_SetState_raw,
    /* 99:6154 */ ves_icall_System_Threading_Thread_ClrState_raw,
    /* 100:6155 */ ves_icall_System_Threading_Thread_SetName_icall_raw,
    /* 101:6157 */ ves_icall_System_Threading_Thread_YieldInternal,
    /* 102:6159 */ ves_icall_System_Threading_Thread_SetPriority_raw,
    /* 103:7010 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
    /* 104:7013 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
    /* 105:7015 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
    /* 106:7016 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
    /* 107:7017 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
    /* 108:7438 */ ves_icall_System_GCHandle_InternalAlloc_raw,
    /* 109:7439 */ ves_icall_System_GCHandle_InternalFree_raw,
    /* 110:7440 */ ves_icall_System_GCHandle_InternalGet_raw,
    /* 111:7441 */ ves_icall_System_GCHandle_InternalSet_raw,
    /* 112:7458 */ ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
    /* 113:7459 */ ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
    /* 114:7460 */ ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
    /* 115:7580 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
    /* 116:7590 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
    /* 117:7591 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
    /* 118:7592 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
    /* 119:7593 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
    /* 120:7594 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
    /* 121:7883 */ ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
    /* 122:7884 */ ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
    /* 123:7886 */ ves_icall_System_Reflection_Assembly_InternalLoad_raw,
    /* 124:7887 */ ves_icall_System_Reflection_Assembly_InternalGetType_raw,
    /* 125:7911 */ ves_icall_System_Reflection_AssemblyName_GetNativeName,
    /* 126:7925 */ ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
    /* 127:7931 */ ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
    /* 128:7938 */ ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
    /* 129:7949 */ ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
    /* 130:7952 */ ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
    /* 131:7968 */ ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
    /* 132:8041 */ ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
    /* 133:8043 */ ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
    /* 134:8044 */ ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
    /* 135:8050 */ ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
    /* 136:8058 */ ves_icall_RuntimeEventInfo_get_event_info_raw,
    /* 137:8076 */ ves_icall_reflection_get_token_raw,
    /* 138:8077 */ ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
    /* 139:8085 */ ves_icall_RuntimeFieldInfo_ResolveType_raw,
    /* 140:8087 */ ves_icall_RuntimeFieldInfo_GetParentType_raw,
    /* 141:8093 */ ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
    /* 142:8094 */ ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
    /* 143:8097 */ ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
    /* 144:8101 */ ves_icall_reflection_get_token_raw,
    /* 145:8107 */ ves_icall_get_method_info_raw,
    /* 146:8108 */ ves_icall_get_method_attributes,
    /* 147:8115 */ ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
    /* 148:8117 */ ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
    /* 149:8128 */ ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
    /* 150:8131 */ ves_icall_RuntimeMethodInfo_get_name_raw,
    /* 151:8132 */ ves_icall_RuntimeMethodInfo_get_base_method_raw,
    /* 152:8133 */ ves_icall_reflection_get_token_raw,
    /* 153:8143 */ ves_icall_InternalInvoke_raw,
    /* 154:8152 */ ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
    /* 155:8158 */ ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
    /* 156:8159 */ ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
    /* 157:8160 */ ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
    /* 158:8162 */ ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
    /* 159:8163 */ ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
    /* 160:8179 */ ves_icall_InvokeClassConstructor_raw,
    /* 161:8181 */ ves_icall_InternalInvoke_raw,
    /* 162:8194 */ ves_icall_reflection_get_token_raw,
    /* 163:8212 */ ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
    /* 164:8213 */ ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
    /* 165:8238 */ ves_icall_RuntimePropertyInfo_get_property_info_raw,
    /* 166:8264 */ ves_icall_reflection_get_token_raw,
    /* 167:8265 */ ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
    /* 168:8666 */ ves_icall_DynamicMethod_create_dynamic_method_raw,
    /* 169:8737 */ ves_icall_AssemblyBuilder_basic_init_raw,
    /* 170:8738 */ ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
    /* 171:8873 */ ves_icall_ModuleBuilder_basic_init_raw,
    /* 172:8874 */ ves_icall_ModuleBuilder_set_wrappers_type_raw,
    /* 173:8879 */ ves_icall_ModuleBuilder_getToken_raw,
    /* 174:8882 */ ves_icall_ModuleBuilder_RegisterToken_raw,
    /* 175:8927 */ ves_icall_TypeBuilder_create_runtime_class_raw,
    /* 176:9157 */ ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
    /* 177:9158 */ ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
    /* 178:9824 */ ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
    /* 179:9828 */ ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
    /* 180:9838 */ ves_icall_System_Diagnostics_StackTrace_GetTrace,
    /* 181:9886 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStart,
    /* 182:9887 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStop,
    /* 183:9888 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart,
    /* 184:9889 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop,
    /* 185:10405 */ ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
    /* 186:10426 */ ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
    /* 187:10428 */ ves_icall_Mono_SafeStringMarshal_StringToUtf8,
    /* 188:10430 */ ves_icall_Mono_SafeStringMarshal_GFree
};

static uint8_t corlib_icall_flags [] = {
    /* 0:168 */ 0,
    /* 1:178 */ 0,
    /* 2:179 */ 0,
    /* 3:180 */ 0,
    /* 4:181 */ 0,
    /* 5:182 */ 4,
    /* 6:183 */ 4,
    /* 7:184 */ 0,
    /* 8:185 */ 4,
    /* 9:186 */ 0,
    /* 10:189 */ 4,
    /* 11:240 */ 0,
    /* 12:241 */ 0,
    /* 13:242 */ 0,
    /* 14:261 */ 4,
    /* 15:262 */ 4,
    /* 16:263 */ 4,
    /* 17:272 */ 4,
    /* 18:273 */ 0,
    /* 19:274 */ 4,
    /* 20:369 */ 0,
    /* 21:372 */ 4,
    /* 22:407 */ 0,
    /* 23:408 */ 4,
    /* 24:409 */ 4,
    /* 25:412 */ 4,
    /* 26:414 */ 4,
    /* 27:418 */ 0,
    /* 28:420 */ 4,
    /* 29:425 */ 4,
    /* 30:433 */ 0,
    /* 31:434 */ 0,
    /* 32:435 */ 0,
    /* 33:509 */ 4,
    /* 34:516 */ 4,
    /* 35:517 */ 4,
    /* 36:521 */ 4,
    /* 37:573 */ 4,
    /* 38:579 */ 4,
    /* 39:582 */ 4,
    /* 40:584 */ 4,
    /* 41:589 */ 4,
    /* 42:590 */ 4,
    /* 43:592 */ 4,
    /* 44:593 */ 4,
    /* 45:597 */ 4,
    /* 46:598 */ 4,
    /* 47:600 */ 4,
    /* 48:601 */ 4,
    /* 49:604 */ 0,
    /* 50:605 */ 4,
    /* 51:606 */ 4,
    /* 52:609 */ 4,
    /* 53:612 */ 4,
    /* 54:614 */ 4,
    /* 55:616 */ 4,
    /* 56:625 */ 4,
    /* 57:679 */ 0,
    /* 58:681 */ 4,
    /* 59:683 */ 4,
    /* 60:693 */ 0,
    /* 61:694 */ 0,
    /* 62:695 */ 4,
    /* 63:697 */ 4,
    /* 64:700 */ 4,
    /* 65:701 */ 4,
    /* 66:702 */ 4,
    /* 67:703 */ 4,
    /* 68:710 */ 4,
    /* 69:711 */ 0,
    /* 70:712 */ 4,
    /* 71:716 */ 4,
    /* 72:717 */ 4,
    /* 73:719 */ 4,
    /* 74:899 */ 4,
    /* 75:1048 */ 4,
    /* 76:1049 */ 4,
    /* 77:6055 */ 0,
    /* 78:6056 */ 0,
    /* 79:6058 */ 0,
    /* 80:6059 */ 0,
    /* 81:6060 */ 0,
    /* 82:6061 */ 0,
    /* 83:6062 */ 0,
    /* 84:6064 */ 0,
    /* 85:6065 */ 0,
    /* 86:6066 */ 0,
    /* 87:6067 */ 0,
    /* 88:6083 */ 4,
    /* 89:6085 */ 4,
    /* 90:6090 */ 4,
    /* 91:6092 */ 4,
    /* 92:6094 */ 4,
    /* 93:6096 */ 4,
    /* 94:6148 */ 4,
    /* 95:6149 */ 0,
    /* 96:6151 */ 4,
    /* 97:6152 */ 4,
    /* 98:6153 */ 4,
    /* 99:6154 */ 4,
    /* 100:6155 */ 4,
    /* 101:6157 */ 0,
    /* 102:6159 */ 4,
    /* 103:7010 */ 4,
    /* 104:7013 */ 4,
    /* 105:7015 */ 4,
    /* 106:7016 */ 4,
    /* 107:7017 */ 4,
    /* 108:7438 */ 4,
    /* 109:7439 */ 4,
    /* 110:7440 */ 4,
    /* 111:7441 */ 4,
    /* 112:7458 */ 0,
    /* 113:7459 */ 0,
    /* 114:7460 */ 4,
    /* 115:7580 */ 4,
    /* 116:7590 */ 4,
    /* 117:7591 */ 4,
    /* 118:7592 */ 4,
    /* 119:7593 */ 0,
    /* 120:7594 */ 4,
    /* 121:7883 */ 4,
    /* 122:7884 */ 4,
    /* 123:7886 */ 4,
    /* 124:7887 */ 4,
    /* 125:7911 */ 0,
    /* 126:7925 */ 4,
    /* 127:7931 */ 4,
    /* 128:7938 */ 4,
    /* 129:7949 */ 4,
    /* 130:7952 */ 4,
    /* 131:7968 */ 0,
    /* 132:8041 */ 4,
    /* 133:8043 */ 4,
    /* 134:8044 */ 4,
    /* 135:8050 */ 4,
    /* 136:8058 */ 4,
    /* 137:8076 */ 4,
    /* 138:8077 */ 4,
    /* 139:8085 */ 4,
    /* 140:8087 */ 4,
    /* 141:8093 */ 4,
    /* 142:8094 */ 4,
    /* 143:8097 */ 4,
    /* 144:8101 */ 4,
    /* 145:8107 */ 4,
    /* 146:8108 */ 0,
    /* 147:8115 */ 4,
    /* 148:8117 */ 4,
    /* 149:8128 */ 4,
    /* 150:8131 */ 4,
    /* 151:8132 */ 4,
    /* 152:8133 */ 4,
    /* 153:8143 */ 4,
    /* 154:8152 */ 4,
    /* 155:8158 */ 4,
    /* 156:8159 */ 4,
    /* 157:8160 */ 4,
    /* 158:8162 */ 4,
    /* 159:8163 */ 4,
    /* 160:8179 */ 4,
    /* 161:8181 */ 4,
    /* 162:8194 */ 4,
    /* 163:8212 */ 4,
    /* 164:8213 */ 4,
    /* 165:8238 */ 4,
    /* 166:8264 */ 4,
    /* 167:8265 */ 4,
    /* 168:8666 */ 4,
    /* 169:8737 */ 4,
    /* 170:8738 */ 4,
    /* 171:8873 */ 4,
    /* 172:8874 */ 4,
    /* 173:8879 */ 4,
    /* 174:8882 */ 4,
    /* 175:8927 */ 4,
    /* 176:9157 */ 4,
    /* 177:9158 */ 4,
    /* 178:9824 */ 0,
    /* 179:9828 */ 0,
    /* 180:9838 */ 0,
    /* 181:9886 */ 0,
    /* 182:9887 */ 0,
    /* 183:9888 */ 0,
    /* 184:9889 */ 0,
    /* 185:10405 */ 0,
    /* 186:10426 */ 0,
    /* 187:10428 */ 0,
    /* 188:10430 */ 0
};
