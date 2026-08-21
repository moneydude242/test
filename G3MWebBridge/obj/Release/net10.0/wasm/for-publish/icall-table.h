
#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
    /* 0 */ 131,
    /* 1 */ 138,
    /* 2 */ 139,
    /* 3 */ 140,
    /* 4 */ 141,
    /* 5 */ 142,
    /* 6 */ 143,
    /* 7 */ 144,
    /* 8 */ 146,
    /* 9 */ 172,
    /* 10 */ 173,
    /* 11 */ 174,
    /* 12 */ 192,
    /* 13 */ 193,
    /* 14 */ 196,
    /* 15 */ 197,
    /* 16 */ 198,
    /* 17 */ 258,
    /* 18 */ 261,
    /* 19 */ 289,
    /* 20 */ 290,
    /* 21 */ 292,
    /* 22 */ 294,
    /* 23 */ 298,
    /* 24 */ 300,
    /* 25 */ 305,
    /* 26 */ 313,
    /* 27 */ 314,
    /* 28 */ 315,
    /* 29 */ 378,
    /* 30 */ 385,
    /* 31 */ 386,
    /* 32 */ 390,
    /* 33 */ 439,
    /* 34 */ 444,
    /* 35 */ 447,
    /* 36 */ 449,
    /* 37 */ 454,
    /* 38 */ 455,
    /* 39 */ 457,
    /* 40 */ 458,
    /* 41 */ 462,
    /* 42 */ 463,
    /* 43 */ 465,
    /* 44 */ 466,
    /* 45 */ 469,
    /* 46 */ 470,
    /* 47 */ 471,
    /* 48 */ 474,
    /* 49 */ 476,
    /* 50 */ 478,
    /* 51 */ 480,
    /* 52 */ 489,
    /* 53 */ 541,
    /* 54 */ 543,
    /* 55 */ 545,
    /* 56 */ 555,
    /* 57 */ 556,
    /* 58 */ 557,
    /* 59 */ 559,
    /* 60 */ 562,
    /* 61 */ 563,
    /* 62 */ 564,
    /* 63 */ 565,
    /* 64 */ 572,
    /* 65 */ 573,
    /* 66 */ 574,
    /* 67 */ 578,
    /* 68 */ 579,
    /* 69 */ 581,
    /* 70 */ 695,
    /* 71 */ 837,
    /* 72 */ 838,
    /* 73 */ 4002,
    /* 74 */ 4003,
    /* 75 */ 4005,
    /* 76 */ 4006,
    /* 77 */ 4007,
    /* 78 */ 4008,
    /* 79 */ 4010,
    /* 80 */ 4011,
    /* 81 */ 4012,
    /* 82 */ 4024,
    /* 83 */ 4026,
    /* 84 */ 4030,
    /* 85 */ 4032,
    /* 86 */ 4034,
    /* 87 */ 4085,
    /* 88 */ 4086,
    /* 89 */ 4088,
    /* 90 */ 4089,
    /* 91 */ 4090,
    /* 92 */ 4091,
    /* 93 */ 4092,
    /* 94 */ 4094,
    /* 95 */ 4096,
    /* 96 */ 4573,
    /* 97 */ 4576,
    /* 98 */ 4578,
    /* 99 */ 4579,
    /* 100 */ 4580,
    /* 101 */ 4968,
    /* 102 */ 4969,
    /* 103 */ 4970,
    /* 104 */ 4986,
    /* 105 */ 4987,
    /* 106 */ 4988,
    /* 107 */ 5087,
    /* 108 */ 5096,
    /* 109 */ 5097,
    /* 110 */ 5098,
    /* 111 */ 5099,
    /* 112 */ 5100,
    /* 113 */ 5228,
    /* 114 */ 5230,
    /* 115 */ 5250,
    /* 116 */ 5264,
    /* 117 */ 5270,
    /* 118 */ 5277,
    /* 119 */ 5288,
    /* 120 */ 5291,
    /* 121 */ 5307,
    /* 122 */ 5378,
    /* 123 */ 5380,
    /* 124 */ 5386,
    /* 125 */ 5394,
    /* 126 */ 5412,
    /* 127 */ 5413,
    /* 128 */ 5421,
    /* 129 */ 5423,
    /* 130 */ 5429,
    /* 131 */ 5430,
    /* 132 */ 5433,
    /* 133 */ 5437,
    /* 134 */ 5443,
    /* 135 */ 5444,
    /* 136 */ 5451,
    /* 137 */ 5453,
    /* 138 */ 5464,
    /* 139 */ 5467,
    /* 140 */ 5468,
    /* 141 */ 5469,
    /* 142 */ 5479,
    /* 143 */ 5488,
    /* 144 */ 5493,
    /* 145 */ 5494,
    /* 146 */ 5495,
    /* 147 */ 5511,
    /* 148 */ 5513,
    /* 149 */ 5526,
    /* 150 */ 5560,
    /* 151 */ 5582,
    /* 152 */ 5583,
    /* 153 */ 5966,
    /* 154 */ 6020,
    /* 155 */ 6021,
    /* 156 */ 6150,
    /* 157 */ 6151,
    /* 158 */ 6155,
    /* 159 */ 6158,
    /* 160 */ 6197,
    /* 161 */ 6682,
    /* 162 */ 6686,
    /* 163 */ 6696,
    /* 164 */ 6731,
    /* 165 */ 6732,
    /* 166 */ 7039,
    /* 167 */ 7060,
    /* 168 */ 7062,
    /* 169 */ 7064
};

void ves_icall_System_Array_InternalCreate (int, int, int, int, int); 
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int); 
int ves_icall_System_Array_CanChangePrimitive (int, int, int); 
int ves_icall_System_Array_FastCopy (int, int, int, int, int); 
int ves_icall_System_Array_GetLengthInternal_raw (int, int, int); 
int ves_icall_System_Array_GetLowerBoundInternal_raw (int, int, int); 
void ves_icall_System_Array_GetGenericValue_icall (int, int, int); 
void ves_icall_System_Array_GetValueImpl_raw (int, int, int, int); 
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int, int, int, int); 
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int, int); 
void ves_icall_System_Runtime_RuntimeImports_Memmove (int, int, int); 
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int, int, int, int); 
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int, int, int, int, int); 
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int, int); 
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int, int, int, int); 
int ves_icall_System_Enum_InternalGetCorElementType (int); 
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int, int, int); 
int ves_icall_System_Environment_get_ProcessorCount (); 
void ves_icall_System_Environment_FailFast_raw (int, int, int, int); 
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
int ves_icall_System_Threading_Interlocked_Exchange_Int (int, int); 
void ves_icall_System_Threading_Interlocked_Exchange_Object (int, int, int); 
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int, int64_t, int64_t); 
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int, int64_t); 
int ves_icall_System_Threading_Interlocked_Add_Int (int, int); 
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int, int); 
void mono_monitor_exit_icall_raw (int, int); 
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
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError (); 
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int); 
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int, int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int, int); 
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int, int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack (); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int, int, int); 
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int); 
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int, int, int, int); 
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int); 
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int, int, int, int); 
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int, int); 
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int, int, int); 
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int, int, int); 
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int, int); 
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int); 
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int, int, int, int); 
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int, int, int); 
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
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int, int); 
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int, int); 
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int, int); 
void ves_icall_InvokeClassConstructor_raw (int, int); 
int ves_icall_InternalInvoke_raw (int, int, int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
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
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal (); 
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int, int, int, int, int, int, int, int); 
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int, int, int, int); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart (int, int, int); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop (int); 
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int); 
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int); 
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int); 
void ves_icall_Mono_SafeStringMarshal_GFree (int);

static void *corlib_icall_funcs [] = {
    /* 0:131 */ ves_icall_System_Array_InternalCreate,
    /* 1:138 */ ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
    /* 2:139 */ ves_icall_System_Array_CanChangePrimitive,
    /* 3:140 */ ves_icall_System_Array_FastCopy,
    /* 4:141 */ ves_icall_System_Array_GetLengthInternal_raw,
    /* 5:142 */ ves_icall_System_Array_GetLowerBoundInternal_raw,
    /* 6:143 */ ves_icall_System_Array_GetGenericValue_icall,
    /* 7:144 */ ves_icall_System_Array_GetValueImpl_raw,
    /* 8:146 */ ves_icall_System_Array_SetValueRelaxedImpl_raw,
    /* 9:172 */ ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
    /* 10:173 */ ves_icall_System_Runtime_RuntimeImports_Memmove,
    /* 11:174 */ ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
    /* 12:192 */ ves_icall_System_Delegate_CreateDelegate_internal_raw,
    /* 13:193 */ ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
    /* 14:196 */ ves_icall_System_Enum_GetEnumValuesAndNames_raw,
    /* 15:197 */ ves_icall_System_Enum_InternalGetCorElementType,
    /* 16:198 */ ves_icall_System_Enum_InternalGetUnderlyingType_raw,
    /* 17:258 */ ves_icall_System_Environment_get_ProcessorCount,
    /* 18:261 */ ves_icall_System_Environment_FailFast_raw,
    /* 19:289 */ ves_icall_System_GC_register_ephemeron_array_raw,
    /* 20:290 */ ves_icall_System_GC_get_ephemeron_tombstone_raw,
    /* 21:292 */ ves_icall_System_GC_SuppressFinalize_raw,
    /* 22:294 */ ves_icall_System_GC_ReRegisterForFinalize_raw,
    /* 23:298 */ ves_icall_System_GC_GetGCMemoryInfo,
    /* 24:300 */ ves_icall_System_GC_AllocPinnedArray_raw,
    /* 25:305 */ ves_icall_System_Object_MemberwiseClone_raw,
    /* 26:313 */ ves_icall_System_Math_Ceiling,
    /* 27:314 */ ves_icall_System_Math_Sqrt,
    /* 28:315 */ ves_icall_System_Math_ModF,
    /* 29:378 */ ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
    /* 30:385 */ ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
    /* 31:386 */ ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
    /* 32:390 */ ves_icall_RuntimeType_GetParentType_raw,
    /* 33:439 */ ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
    /* 34:444 */ ves_icall_RuntimeType_make_array_type_raw,
    /* 35:447 */ ves_icall_RuntimeType_make_byref_type_raw,
    /* 36:449 */ ves_icall_RuntimeType_make_pointer_type_raw,
    /* 37:454 */ ves_icall_RuntimeType_MakeGenericType_raw,
    /* 38:455 */ ves_icall_RuntimeType_GetMethodsByName_native_raw,
    /* 39:457 */ ves_icall_RuntimeType_GetPropertiesByName_native_raw,
    /* 40:458 */ ves_icall_RuntimeType_GetConstructors_native_raw,
    /* 41:462 */ ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
    /* 42:463 */ ves_icall_RuntimeType_GetDeclaringMethod_raw,
    /* 43:465 */ ves_icall_System_RuntimeType_getFullName_raw,
    /* 44:466 */ ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
    /* 45:469 */ ves_icall_RuntimeType_GetGenericParameterPosition,
    /* 46:470 */ ves_icall_RuntimeType_GetEvents_native_raw,
    /* 47:471 */ ves_icall_RuntimeType_GetFields_native_raw,
    /* 48:474 */ ves_icall_RuntimeType_GetInterfaces_raw,
    /* 49:476 */ ves_icall_RuntimeType_GetDeclaringType_raw,
    /* 50:478 */ ves_icall_RuntimeType_GetName_raw,
    /* 51:480 */ ves_icall_RuntimeType_GetNamespace_raw,
    /* 52:489 */ ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
    /* 53:541 */ ves_icall_RuntimeTypeHandle_GetAttributes,
    /* 54:543 */ ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
    /* 55:545 */ ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
    /* 56:555 */ ves_icall_RuntimeTypeHandle_GetCorElementType,
    /* 57:556 */ ves_icall_RuntimeTypeHandle_HasInstantiation,
    /* 58:557 */ ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
    /* 59:559 */ ves_icall_RuntimeTypeHandle_HasReferences_raw,
    /* 60:562 */ ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
    /* 61:563 */ ves_icall_RuntimeTypeHandle_GetAssembly_raw,
    /* 62:564 */ ves_icall_RuntimeTypeHandle_GetElementType_raw,
    /* 63:565 */ ves_icall_RuntimeTypeHandle_GetModule_raw,
    /* 64:572 */ ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
    /* 65:573 */ ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
    /* 66:574 */ ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
    /* 67:578 */ ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
    /* 68:579 */ ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
    /* 69:581 */ ves_icall_System_String_FastAllocateString_raw,
    /* 70:695 */ ves_icall_System_Type_internal_from_handle_raw,
    /* 71:837 */ ves_icall_System_ValueType_InternalGetHashCode_raw,
    /* 72:838 */ ves_icall_System_ValueType_Equals_raw,
    /* 73:4002 */ ves_icall_System_Threading_Interlocked_CompareExchange_Int,
    /* 74:4003 */ ves_icall_System_Threading_Interlocked_CompareExchange_Object,
    /* 75:4005 */ ves_icall_System_Threading_Interlocked_Decrement_Int,
    /* 76:4006 */ ves_icall_System_Threading_Interlocked_Increment_Int,
    /* 77:4007 */ ves_icall_System_Threading_Interlocked_Exchange_Int,
    /* 78:4008 */ ves_icall_System_Threading_Interlocked_Exchange_Object,
    /* 79:4010 */ ves_icall_System_Threading_Interlocked_CompareExchange_Long,
    /* 80:4011 */ ves_icall_System_Threading_Interlocked_Exchange_Long,
    /* 81:4012 */ ves_icall_System_Threading_Interlocked_Add_Int,
    /* 82:4024 */ ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
    /* 83:4026 */ mono_monitor_exit_icall_raw,
    /* 84:4030 */ ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
    /* 85:4032 */ ves_icall_System_Threading_Monitor_Monitor_wait_raw,
    /* 86:4034 */ ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
    /* 87:4085 */ ves_icall_System_Threading_Thread_InitInternal_raw,
    /* 88:4086 */ ves_icall_System_Threading_Thread_GetCurrentThread,
    /* 89:4088 */ ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
    /* 90:4089 */ ves_icall_System_Threading_Thread_GetState_raw,
    /* 91:4090 */ ves_icall_System_Threading_Thread_SetState_raw,
    /* 92:4091 */ ves_icall_System_Threading_Thread_ClrState_raw,
    /* 93:4092 */ ves_icall_System_Threading_Thread_SetName_icall_raw,
    /* 94:4094 */ ves_icall_System_Threading_Thread_YieldInternal,
    /* 95:4096 */ ves_icall_System_Threading_Thread_SetPriority_raw,
    /* 96:4573 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
    /* 97:4576 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
    /* 98:4578 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
    /* 99:4579 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
    /* 100:4580 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
    /* 101:4968 */ ves_icall_System_GCHandle_InternalAlloc_raw,
    /* 102:4969 */ ves_icall_System_GCHandle_InternalFree_raw,
    /* 103:4970 */ ves_icall_System_GCHandle_InternalGet_raw,
    /* 104:4986 */ ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
    /* 105:4987 */ ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
    /* 106:4988 */ ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
    /* 107:5087 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
    /* 108:5096 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
    /* 109:5097 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
    /* 110:5098 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
    /* 111:5099 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
    /* 112:5100 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
    /* 113:5228 */ ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
    /* 114:5230 */ ves_icall_System_Reflection_Assembly_InternalLoad_raw,
    /* 115:5250 */ ves_icall_System_Reflection_AssemblyName_GetNativeName,
    /* 116:5264 */ ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
    /* 117:5270 */ ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
    /* 118:5277 */ ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
    /* 119:5288 */ ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
    /* 120:5291 */ ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
    /* 121:5307 */ ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
    /* 122:5378 */ ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
    /* 123:5380 */ ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
    /* 124:5386 */ ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
    /* 125:5394 */ ves_icall_RuntimeEventInfo_get_event_info_raw,
    /* 126:5412 */ ves_icall_reflection_get_token_raw,
    /* 127:5413 */ ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
    /* 128:5421 */ ves_icall_RuntimeFieldInfo_ResolveType_raw,
    /* 129:5423 */ ves_icall_RuntimeFieldInfo_GetParentType_raw,
    /* 130:5429 */ ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
    /* 131:5430 */ ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
    /* 132:5433 */ ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
    /* 133:5437 */ ves_icall_reflection_get_token_raw,
    /* 134:5443 */ ves_icall_get_method_info_raw,
    /* 135:5444 */ ves_icall_get_method_attributes,
    /* 136:5451 */ ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
    /* 137:5453 */ ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
    /* 138:5464 */ ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
    /* 139:5467 */ ves_icall_RuntimeMethodInfo_get_name_raw,
    /* 140:5468 */ ves_icall_RuntimeMethodInfo_get_base_method_raw,
    /* 141:5469 */ ves_icall_reflection_get_token_raw,
    /* 142:5479 */ ves_icall_InternalInvoke_raw,
    /* 143:5488 */ ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
    /* 144:5493 */ ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
    /* 145:5494 */ ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
    /* 146:5495 */ ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
    /* 147:5511 */ ves_icall_InvokeClassConstructor_raw,
    /* 148:5513 */ ves_icall_InternalInvoke_raw,
    /* 149:5526 */ ves_icall_reflection_get_token_raw,
    /* 150:5560 */ ves_icall_RuntimePropertyInfo_get_property_info_raw,
    /* 151:5582 */ ves_icall_reflection_get_token_raw,
    /* 152:5583 */ ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
    /* 153:5966 */ ves_icall_DynamicMethod_create_dynamic_method_raw,
    /* 154:6020 */ ves_icall_AssemblyBuilder_basic_init_raw,
    /* 155:6021 */ ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
    /* 156:6150 */ ves_icall_ModuleBuilder_basic_init_raw,
    /* 157:6151 */ ves_icall_ModuleBuilder_set_wrappers_type_raw,
    /* 158:6155 */ ves_icall_ModuleBuilder_getToken_raw,
    /* 159:6158 */ ves_icall_ModuleBuilder_RegisterToken_raw,
    /* 160:6197 */ ves_icall_TypeBuilder_create_runtime_class_raw,
    /* 161:6682 */ ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
    /* 162:6686 */ ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
    /* 163:6696 */ ves_icall_System_Diagnostics_StackTrace_GetTrace,
    /* 164:6731 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart,
    /* 165:6732 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop,
    /* 166:7039 */ ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
    /* 167:7060 */ ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
    /* 168:7062 */ ves_icall_Mono_SafeStringMarshal_StringToUtf8,
    /* 169:7064 */ ves_icall_Mono_SafeStringMarshal_GFree
};

static uint8_t corlib_icall_flags [] = {
    /* 0:131 */ 0,
    /* 1:138 */ 0,
    /* 2:139 */ 0,
    /* 3:140 */ 0,
    /* 4:141 */ 4,
    /* 5:142 */ 4,
    /* 6:143 */ 0,
    /* 7:144 */ 4,
    /* 8:146 */ 4,
    /* 9:172 */ 0,
    /* 10:173 */ 0,
    /* 11:174 */ 0,
    /* 12:192 */ 4,
    /* 13:193 */ 4,
    /* 14:196 */ 4,
    /* 15:197 */ 0,
    /* 16:198 */ 4,
    /* 17:258 */ 0,
    /* 18:261 */ 4,
    /* 19:289 */ 4,
    /* 20:290 */ 4,
    /* 21:292 */ 4,
    /* 22:294 */ 4,
    /* 23:298 */ 0,
    /* 24:300 */ 4,
    /* 25:305 */ 4,
    /* 26:313 */ 0,
    /* 27:314 */ 0,
    /* 28:315 */ 0,
    /* 29:378 */ 4,
    /* 30:385 */ 4,
    /* 31:386 */ 4,
    /* 32:390 */ 4,
    /* 33:439 */ 4,
    /* 34:444 */ 4,
    /* 35:447 */ 4,
    /* 36:449 */ 4,
    /* 37:454 */ 4,
    /* 38:455 */ 4,
    /* 39:457 */ 4,
    /* 40:458 */ 4,
    /* 41:462 */ 4,
    /* 42:463 */ 4,
    /* 43:465 */ 4,
    /* 44:466 */ 4,
    /* 45:469 */ 0,
    /* 46:470 */ 4,
    /* 47:471 */ 4,
    /* 48:474 */ 4,
    /* 49:476 */ 4,
    /* 50:478 */ 4,
    /* 51:480 */ 4,
    /* 52:489 */ 4,
    /* 53:541 */ 0,
    /* 54:543 */ 4,
    /* 55:545 */ 4,
    /* 56:555 */ 0,
    /* 57:556 */ 0,
    /* 58:557 */ 4,
    /* 59:559 */ 4,
    /* 60:562 */ 4,
    /* 61:563 */ 4,
    /* 62:564 */ 4,
    /* 63:565 */ 4,
    /* 64:572 */ 4,
    /* 65:573 */ 0,
    /* 66:574 */ 4,
    /* 67:578 */ 4,
    /* 68:579 */ 4,
    /* 69:581 */ 4,
    /* 70:695 */ 4,
    /* 71:837 */ 4,
    /* 72:838 */ 4,
    /* 73:4002 */ 0,
    /* 74:4003 */ 0,
    /* 75:4005 */ 0,
    /* 76:4006 */ 0,
    /* 77:4007 */ 0,
    /* 78:4008 */ 0,
    /* 79:4010 */ 0,
    /* 80:4011 */ 0,
    /* 81:4012 */ 0,
    /* 82:4024 */ 4,
    /* 83:4026 */ 4,
    /* 84:4030 */ 4,
    /* 85:4032 */ 4,
    /* 86:4034 */ 4,
    /* 87:4085 */ 4,
    /* 88:4086 */ 0,
    /* 89:4088 */ 4,
    /* 90:4089 */ 4,
    /* 91:4090 */ 4,
    /* 92:4091 */ 4,
    /* 93:4092 */ 4,
    /* 94:4094 */ 0,
    /* 95:4096 */ 4,
    /* 96:4573 */ 4,
    /* 97:4576 */ 4,
    /* 98:4578 */ 4,
    /* 99:4579 */ 4,
    /* 100:4580 */ 4,
    /* 101:4968 */ 4,
    /* 102:4969 */ 4,
    /* 103:4970 */ 4,
    /* 104:4986 */ 0,
    /* 105:4987 */ 0,
    /* 106:4988 */ 4,
    /* 107:5087 */ 4,
    /* 108:5096 */ 4,
    /* 109:5097 */ 4,
    /* 110:5098 */ 4,
    /* 111:5099 */ 0,
    /* 112:5100 */ 4,
    /* 113:5228 */ 4,
    /* 114:5230 */ 4,
    /* 115:5250 */ 0,
    /* 116:5264 */ 4,
    /* 117:5270 */ 4,
    /* 118:5277 */ 4,
    /* 119:5288 */ 4,
    /* 120:5291 */ 4,
    /* 121:5307 */ 0,
    /* 122:5378 */ 4,
    /* 123:5380 */ 4,
    /* 124:5386 */ 4,
    /* 125:5394 */ 4,
    /* 126:5412 */ 4,
    /* 127:5413 */ 4,
    /* 128:5421 */ 4,
    /* 129:5423 */ 4,
    /* 130:5429 */ 4,
    /* 131:5430 */ 4,
    /* 132:5433 */ 4,
    /* 133:5437 */ 4,
    /* 134:5443 */ 4,
    /* 135:5444 */ 0,
    /* 136:5451 */ 4,
    /* 137:5453 */ 4,
    /* 138:5464 */ 4,
    /* 139:5467 */ 4,
    /* 140:5468 */ 4,
    /* 141:5469 */ 4,
    /* 142:5479 */ 4,
    /* 143:5488 */ 4,
    /* 144:5493 */ 4,
    /* 145:5494 */ 4,
    /* 146:5495 */ 4,
    /* 147:5511 */ 4,
    /* 148:5513 */ 4,
    /* 149:5526 */ 4,
    /* 150:5560 */ 4,
    /* 151:5582 */ 4,
    /* 152:5583 */ 4,
    /* 153:5966 */ 4,
    /* 154:6020 */ 4,
    /* 155:6021 */ 4,
    /* 156:6150 */ 4,
    /* 157:6151 */ 4,
    /* 158:6155 */ 4,
    /* 159:6158 */ 4,
    /* 160:6197 */ 4,
    /* 161:6682 */ 0,
    /* 162:6686 */ 0,
    /* 163:6696 */ 0,
    /* 164:6731 */ 0,
    /* 165:6732 */ 0,
    /* 166:7039 */ 0,
    /* 167:7060 */ 0,
    /* 168:7062 */ 0,
    /* 169:7064 */ 0
};
