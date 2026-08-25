
#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
    /* 0 */ 138,
    /* 1 */ 146,
    /* 2 */ 147,
    /* 3 */ 148,
    /* 4 */ 149,
    /* 5 */ 150,
    /* 6 */ 151,
    /* 7 */ 152,
    /* 8 */ 154,
    /* 9 */ 155,
    /* 10 */ 196,
    /* 11 */ 197,
    /* 12 */ 198,
    /* 13 */ 217,
    /* 14 */ 218,
    /* 15 */ 219,
    /* 16 */ 228,
    /* 17 */ 229,
    /* 18 */ 230,
    /* 19 */ 318,
    /* 20 */ 321,
    /* 21 */ 353,
    /* 22 */ 354,
    /* 23 */ 356,
    /* 24 */ 358,
    /* 25 */ 362,
    /* 26 */ 364,
    /* 27 */ 369,
    /* 28 */ 377,
    /* 29 */ 378,
    /* 30 */ 379,
    /* 31 */ 452,
    /* 32 */ 459,
    /* 33 */ 460,
    /* 34 */ 464,
    /* 35 */ 518,
    /* 36 */ 524,
    /* 37 */ 527,
    /* 38 */ 529,
    /* 39 */ 534,
    /* 40 */ 535,
    /* 41 */ 537,
    /* 42 */ 538,
    /* 43 */ 542,
    /* 44 */ 543,
    /* 45 */ 545,
    /* 46 */ 546,
    /* 47 */ 549,
    /* 48 */ 550,
    /* 49 */ 551,
    /* 50 */ 554,
    /* 51 */ 556,
    /* 52 */ 558,
    /* 53 */ 560,
    /* 54 */ 569,
    /* 55 */ 622,
    /* 56 */ 624,
    /* 57 */ 626,
    /* 58 */ 636,
    /* 59 */ 637,
    /* 60 */ 638,
    /* 61 */ 640,
    /* 62 */ 643,
    /* 63 */ 644,
    /* 64 */ 645,
    /* 65 */ 646,
    /* 66 */ 653,
    /* 67 */ 654,
    /* 68 */ 655,
    /* 69 */ 659,
    /* 70 */ 660,
    /* 71 */ 662,
    /* 72 */ 811,
    /* 73 */ 959,
    /* 74 */ 960,
    /* 75 */ 5574,
    /* 76 */ 5575,
    /* 77 */ 5577,
    /* 78 */ 5578,
    /* 79 */ 5579,
    /* 80 */ 5580,
    /* 81 */ 5582,
    /* 82 */ 5583,
    /* 83 */ 5584,
    /* 84 */ 5598,
    /* 85 */ 5600,
    /* 86 */ 5604,
    /* 87 */ 5606,
    /* 88 */ 5608,
    /* 89 */ 5659,
    /* 90 */ 5660,
    /* 91 */ 5662,
    /* 92 */ 5663,
    /* 93 */ 5664,
    /* 94 */ 5665,
    /* 95 */ 5666,
    /* 96 */ 5668,
    /* 97 */ 5670,
    /* 98 */ 6171,
    /* 99 */ 6174,
    /* 100 */ 6176,
    /* 101 */ 6177,
    /* 102 */ 6178,
    /* 103 */ 6598,
    /* 104 */ 6599,
    /* 105 */ 6600,
    /* 106 */ 6601,
    /* 107 */ 6617,
    /* 108 */ 6618,
    /* 109 */ 6619,
    /* 110 */ 6723,
    /* 111 */ 6733,
    /* 112 */ 6734,
    /* 113 */ 6735,
    /* 114 */ 6736,
    /* 115 */ 6737,
    /* 116 */ 6883,
    /* 117 */ 6884,
    /* 118 */ 6886,
    /* 119 */ 6908,
    /* 120 */ 6922,
    /* 121 */ 6928,
    /* 122 */ 6935,
    /* 123 */ 6946,
    /* 124 */ 6949,
    /* 125 */ 6965,
    /* 126 */ 7037,
    /* 127 */ 7039,
    /* 128 */ 7040,
    /* 129 */ 7046,
    /* 130 */ 7054,
    /* 131 */ 7072,
    /* 132 */ 7073,
    /* 133 */ 7081,
    /* 134 */ 7083,
    /* 135 */ 7089,
    /* 136 */ 7090,
    /* 137 */ 7093,
    /* 138 */ 7097,
    /* 139 */ 7103,
    /* 140 */ 7104,
    /* 141 */ 7111,
    /* 142 */ 7113,
    /* 143 */ 7124,
    /* 144 */ 7127,
    /* 145 */ 7128,
    /* 146 */ 7129,
    /* 147 */ 7139,
    /* 148 */ 7148,
    /* 149 */ 7154,
    /* 150 */ 7155,
    /* 151 */ 7156,
    /* 152 */ 7158,
    /* 153 */ 7159,
    /* 154 */ 7175,
    /* 155 */ 7177,
    /* 156 */ 7190,
    /* 157 */ 7209,
    /* 158 */ 7210,
    /* 159 */ 7236,
    /* 160 */ 7262,
    /* 161 */ 7263,
    /* 162 */ 7668,
    /* 163 */ 7739,
    /* 164 */ 7740,
    /* 165 */ 7875,
    /* 166 */ 7876,
    /* 167 */ 7881,
    /* 168 */ 7884,
    /* 169 */ 7928,
    /* 170 */ 8581,
    /* 171 */ 8585,
    /* 172 */ 8595,
    /* 173 */ 8634,
    /* 174 */ 8635,
    /* 175 */ 9110,
    /* 176 */ 9131,
    /* 177 */ 9133,
    /* 178 */ 9135
};

void ves_icall_System_Array_InternalCreate (int, int, int, int, int); 
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int); 
int ves_icall_System_Array_CanChangePrimitive (int, int, int); 
int ves_icall_System_Array_FastCopy (int, int, int, int, int); 
int ves_icall_System_Array_GetLengthInternal_raw (int, int, int); 
int ves_icall_System_Array_GetLowerBoundInternal_raw (int, int, int); 
void ves_icall_System_Array_GetGenericValue_icall (int, int, int); 
void ves_icall_System_Array_GetValueImpl_raw (int, int, int, int); 
void ves_icall_System_Array_SetValueImpl_raw (int, int, int, int); 
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
    /* 0:138 */ ves_icall_System_Array_InternalCreate,
    /* 1:146 */ ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
    /* 2:147 */ ves_icall_System_Array_CanChangePrimitive,
    /* 3:148 */ ves_icall_System_Array_FastCopy,
    /* 4:149 */ ves_icall_System_Array_GetLengthInternal_raw,
    /* 5:150 */ ves_icall_System_Array_GetLowerBoundInternal_raw,
    /* 6:151 */ ves_icall_System_Array_GetGenericValue_icall,
    /* 7:152 */ ves_icall_System_Array_GetValueImpl_raw,
    /* 8:154 */ ves_icall_System_Array_SetValueImpl_raw,
    /* 9:155 */ ves_icall_System_Array_SetValueRelaxedImpl_raw,
    /* 10:196 */ ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
    /* 11:197 */ ves_icall_System_Runtime_RuntimeImports_Memmove,
    /* 12:198 */ ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
    /* 13:217 */ ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
    /* 14:218 */ ves_icall_System_Delegate_CreateDelegate_internal_raw,
    /* 15:219 */ ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
    /* 16:228 */ ves_icall_System_Enum_GetEnumValuesAndNames_raw,
    /* 17:229 */ ves_icall_System_Enum_InternalGetCorElementType,
    /* 18:230 */ ves_icall_System_Enum_InternalGetUnderlyingType_raw,
    /* 19:318 */ ves_icall_System_Environment_get_ProcessorCount,
    /* 20:321 */ ves_icall_System_Environment_FailFast_raw,
    /* 21:353 */ ves_icall_System_GC_register_ephemeron_array_raw,
    /* 22:354 */ ves_icall_System_GC_get_ephemeron_tombstone_raw,
    /* 23:356 */ ves_icall_System_GC_SuppressFinalize_raw,
    /* 24:358 */ ves_icall_System_GC_ReRegisterForFinalize_raw,
    /* 25:362 */ ves_icall_System_GC_GetGCMemoryInfo,
    /* 26:364 */ ves_icall_System_GC_AllocPinnedArray_raw,
    /* 27:369 */ ves_icall_System_Object_MemberwiseClone_raw,
    /* 28:377 */ ves_icall_System_Math_Ceiling,
    /* 29:378 */ ves_icall_System_Math_Sqrt,
    /* 30:379 */ ves_icall_System_Math_ModF,
    /* 31:452 */ ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
    /* 32:459 */ ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
    /* 33:460 */ ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
    /* 34:464 */ ves_icall_RuntimeType_GetParentType_raw,
    /* 35:518 */ ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
    /* 36:524 */ ves_icall_RuntimeType_make_array_type_raw,
    /* 37:527 */ ves_icall_RuntimeType_make_byref_type_raw,
    /* 38:529 */ ves_icall_RuntimeType_make_pointer_type_raw,
    /* 39:534 */ ves_icall_RuntimeType_MakeGenericType_raw,
    /* 40:535 */ ves_icall_RuntimeType_GetMethodsByName_native_raw,
    /* 41:537 */ ves_icall_RuntimeType_GetPropertiesByName_native_raw,
    /* 42:538 */ ves_icall_RuntimeType_GetConstructors_native_raw,
    /* 43:542 */ ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
    /* 44:543 */ ves_icall_RuntimeType_GetDeclaringMethod_raw,
    /* 45:545 */ ves_icall_System_RuntimeType_getFullName_raw,
    /* 46:546 */ ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
    /* 47:549 */ ves_icall_RuntimeType_GetGenericParameterPosition,
    /* 48:550 */ ves_icall_RuntimeType_GetEvents_native_raw,
    /* 49:551 */ ves_icall_RuntimeType_GetFields_native_raw,
    /* 50:554 */ ves_icall_RuntimeType_GetInterfaces_raw,
    /* 51:556 */ ves_icall_RuntimeType_GetDeclaringType_raw,
    /* 52:558 */ ves_icall_RuntimeType_GetName_raw,
    /* 53:560 */ ves_icall_RuntimeType_GetNamespace_raw,
    /* 54:569 */ ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
    /* 55:622 */ ves_icall_RuntimeTypeHandle_GetAttributes,
    /* 56:624 */ ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
    /* 57:626 */ ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
    /* 58:636 */ ves_icall_RuntimeTypeHandle_GetCorElementType,
    /* 59:637 */ ves_icall_RuntimeTypeHandle_HasInstantiation,
    /* 60:638 */ ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
    /* 61:640 */ ves_icall_RuntimeTypeHandle_HasReferences_raw,
    /* 62:643 */ ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
    /* 63:644 */ ves_icall_RuntimeTypeHandle_GetAssembly_raw,
    /* 64:645 */ ves_icall_RuntimeTypeHandle_GetElementType_raw,
    /* 65:646 */ ves_icall_RuntimeTypeHandle_GetModule_raw,
    /* 66:653 */ ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
    /* 67:654 */ ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
    /* 68:655 */ ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
    /* 69:659 */ ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
    /* 70:660 */ ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
    /* 71:662 */ ves_icall_System_String_FastAllocateString_raw,
    /* 72:811 */ ves_icall_System_Type_internal_from_handle_raw,
    /* 73:959 */ ves_icall_System_ValueType_InternalGetHashCode_raw,
    /* 74:960 */ ves_icall_System_ValueType_Equals_raw,
    /* 75:5574 */ ves_icall_System_Threading_Interlocked_CompareExchange_Int,
    /* 76:5575 */ ves_icall_System_Threading_Interlocked_CompareExchange_Object,
    /* 77:5577 */ ves_icall_System_Threading_Interlocked_Decrement_Int,
    /* 78:5578 */ ves_icall_System_Threading_Interlocked_Increment_Int,
    /* 79:5579 */ ves_icall_System_Threading_Interlocked_Exchange_Int,
    /* 80:5580 */ ves_icall_System_Threading_Interlocked_Exchange_Object,
    /* 81:5582 */ ves_icall_System_Threading_Interlocked_CompareExchange_Long,
    /* 82:5583 */ ves_icall_System_Threading_Interlocked_Exchange_Long,
    /* 83:5584 */ ves_icall_System_Threading_Interlocked_Add_Int,
    /* 84:5598 */ ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
    /* 85:5600 */ mono_monitor_exit_icall_raw,
    /* 86:5604 */ ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
    /* 87:5606 */ ves_icall_System_Threading_Monitor_Monitor_wait_raw,
    /* 88:5608 */ ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
    /* 89:5659 */ ves_icall_System_Threading_Thread_InitInternal_raw,
    /* 90:5660 */ ves_icall_System_Threading_Thread_GetCurrentThread,
    /* 91:5662 */ ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
    /* 92:5663 */ ves_icall_System_Threading_Thread_GetState_raw,
    /* 93:5664 */ ves_icall_System_Threading_Thread_SetState_raw,
    /* 94:5665 */ ves_icall_System_Threading_Thread_ClrState_raw,
    /* 95:5666 */ ves_icall_System_Threading_Thread_SetName_icall_raw,
    /* 96:5668 */ ves_icall_System_Threading_Thread_YieldInternal,
    /* 97:5670 */ ves_icall_System_Threading_Thread_SetPriority_raw,
    /* 98:6171 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
    /* 99:6174 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
    /* 100:6176 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
    /* 101:6177 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
    /* 102:6178 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
    /* 103:6598 */ ves_icall_System_GCHandle_InternalAlloc_raw,
    /* 104:6599 */ ves_icall_System_GCHandle_InternalFree_raw,
    /* 105:6600 */ ves_icall_System_GCHandle_InternalGet_raw,
    /* 106:6601 */ ves_icall_System_GCHandle_InternalSet_raw,
    /* 107:6617 */ ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
    /* 108:6618 */ ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
    /* 109:6619 */ ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
    /* 110:6723 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
    /* 111:6733 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
    /* 112:6734 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
    /* 113:6735 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
    /* 114:6736 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
    /* 115:6737 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
    /* 116:6883 */ ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
    /* 117:6884 */ ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
    /* 118:6886 */ ves_icall_System_Reflection_Assembly_InternalLoad_raw,
    /* 119:6908 */ ves_icall_System_Reflection_AssemblyName_GetNativeName,
    /* 120:6922 */ ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
    /* 121:6928 */ ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
    /* 122:6935 */ ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
    /* 123:6946 */ ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
    /* 124:6949 */ ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
    /* 125:6965 */ ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
    /* 126:7037 */ ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
    /* 127:7039 */ ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
    /* 128:7040 */ ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
    /* 129:7046 */ ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
    /* 130:7054 */ ves_icall_RuntimeEventInfo_get_event_info_raw,
    /* 131:7072 */ ves_icall_reflection_get_token_raw,
    /* 132:7073 */ ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
    /* 133:7081 */ ves_icall_RuntimeFieldInfo_ResolveType_raw,
    /* 134:7083 */ ves_icall_RuntimeFieldInfo_GetParentType_raw,
    /* 135:7089 */ ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
    /* 136:7090 */ ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
    /* 137:7093 */ ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
    /* 138:7097 */ ves_icall_reflection_get_token_raw,
    /* 139:7103 */ ves_icall_get_method_info_raw,
    /* 140:7104 */ ves_icall_get_method_attributes,
    /* 141:7111 */ ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
    /* 142:7113 */ ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
    /* 143:7124 */ ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
    /* 144:7127 */ ves_icall_RuntimeMethodInfo_get_name_raw,
    /* 145:7128 */ ves_icall_RuntimeMethodInfo_get_base_method_raw,
    /* 146:7129 */ ves_icall_reflection_get_token_raw,
    /* 147:7139 */ ves_icall_InternalInvoke_raw,
    /* 148:7148 */ ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
    /* 149:7154 */ ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
    /* 150:7155 */ ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
    /* 151:7156 */ ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
    /* 152:7158 */ ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
    /* 153:7159 */ ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
    /* 154:7175 */ ves_icall_InvokeClassConstructor_raw,
    /* 155:7177 */ ves_icall_InternalInvoke_raw,
    /* 156:7190 */ ves_icall_reflection_get_token_raw,
    /* 157:7209 */ ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
    /* 158:7210 */ ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
    /* 159:7236 */ ves_icall_RuntimePropertyInfo_get_property_info_raw,
    /* 160:7262 */ ves_icall_reflection_get_token_raw,
    /* 161:7263 */ ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
    /* 162:7668 */ ves_icall_DynamicMethod_create_dynamic_method_raw,
    /* 163:7739 */ ves_icall_AssemblyBuilder_basic_init_raw,
    /* 164:7740 */ ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
    /* 165:7875 */ ves_icall_ModuleBuilder_basic_init_raw,
    /* 166:7876 */ ves_icall_ModuleBuilder_set_wrappers_type_raw,
    /* 167:7881 */ ves_icall_ModuleBuilder_getToken_raw,
    /* 168:7884 */ ves_icall_ModuleBuilder_RegisterToken_raw,
    /* 169:7928 */ ves_icall_TypeBuilder_create_runtime_class_raw,
    /* 170:8581 */ ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
    /* 171:8585 */ ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
    /* 172:8595 */ ves_icall_System_Diagnostics_StackTrace_GetTrace,
    /* 173:8634 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart,
    /* 174:8635 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop,
    /* 175:9110 */ ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
    /* 176:9131 */ ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
    /* 177:9133 */ ves_icall_Mono_SafeStringMarshal_StringToUtf8,
    /* 178:9135 */ ves_icall_Mono_SafeStringMarshal_GFree
};

static uint8_t corlib_icall_flags [] = {
    /* 0:138 */ 0,
    /* 1:146 */ 0,
    /* 2:147 */ 0,
    /* 3:148 */ 0,
    /* 4:149 */ 4,
    /* 5:150 */ 4,
    /* 6:151 */ 0,
    /* 7:152 */ 4,
    /* 8:154 */ 4,
    /* 9:155 */ 4,
    /* 10:196 */ 0,
    /* 11:197 */ 0,
    /* 12:198 */ 0,
    /* 13:217 */ 4,
    /* 14:218 */ 4,
    /* 15:219 */ 4,
    /* 16:228 */ 4,
    /* 17:229 */ 0,
    /* 18:230 */ 4,
    /* 19:318 */ 0,
    /* 20:321 */ 4,
    /* 21:353 */ 4,
    /* 22:354 */ 4,
    /* 23:356 */ 4,
    /* 24:358 */ 4,
    /* 25:362 */ 0,
    /* 26:364 */ 4,
    /* 27:369 */ 4,
    /* 28:377 */ 0,
    /* 29:378 */ 0,
    /* 30:379 */ 0,
    /* 31:452 */ 4,
    /* 32:459 */ 4,
    /* 33:460 */ 4,
    /* 34:464 */ 4,
    /* 35:518 */ 4,
    /* 36:524 */ 4,
    /* 37:527 */ 4,
    /* 38:529 */ 4,
    /* 39:534 */ 4,
    /* 40:535 */ 4,
    /* 41:537 */ 4,
    /* 42:538 */ 4,
    /* 43:542 */ 4,
    /* 44:543 */ 4,
    /* 45:545 */ 4,
    /* 46:546 */ 4,
    /* 47:549 */ 0,
    /* 48:550 */ 4,
    /* 49:551 */ 4,
    /* 50:554 */ 4,
    /* 51:556 */ 4,
    /* 52:558 */ 4,
    /* 53:560 */ 4,
    /* 54:569 */ 4,
    /* 55:622 */ 0,
    /* 56:624 */ 4,
    /* 57:626 */ 4,
    /* 58:636 */ 0,
    /* 59:637 */ 0,
    /* 60:638 */ 4,
    /* 61:640 */ 4,
    /* 62:643 */ 4,
    /* 63:644 */ 4,
    /* 64:645 */ 4,
    /* 65:646 */ 4,
    /* 66:653 */ 4,
    /* 67:654 */ 0,
    /* 68:655 */ 4,
    /* 69:659 */ 4,
    /* 70:660 */ 4,
    /* 71:662 */ 4,
    /* 72:811 */ 4,
    /* 73:959 */ 4,
    /* 74:960 */ 4,
    /* 75:5574 */ 0,
    /* 76:5575 */ 0,
    /* 77:5577 */ 0,
    /* 78:5578 */ 0,
    /* 79:5579 */ 0,
    /* 80:5580 */ 0,
    /* 81:5582 */ 0,
    /* 82:5583 */ 0,
    /* 83:5584 */ 0,
    /* 84:5598 */ 4,
    /* 85:5600 */ 4,
    /* 86:5604 */ 4,
    /* 87:5606 */ 4,
    /* 88:5608 */ 4,
    /* 89:5659 */ 4,
    /* 90:5660 */ 0,
    /* 91:5662 */ 4,
    /* 92:5663 */ 4,
    /* 93:5664 */ 4,
    /* 94:5665 */ 4,
    /* 95:5666 */ 4,
    /* 96:5668 */ 0,
    /* 97:5670 */ 4,
    /* 98:6171 */ 4,
    /* 99:6174 */ 4,
    /* 100:6176 */ 4,
    /* 101:6177 */ 4,
    /* 102:6178 */ 4,
    /* 103:6598 */ 4,
    /* 104:6599 */ 4,
    /* 105:6600 */ 4,
    /* 106:6601 */ 4,
    /* 107:6617 */ 0,
    /* 108:6618 */ 0,
    /* 109:6619 */ 4,
    /* 110:6723 */ 4,
    /* 111:6733 */ 4,
    /* 112:6734 */ 4,
    /* 113:6735 */ 4,
    /* 114:6736 */ 0,
    /* 115:6737 */ 4,
    /* 116:6883 */ 4,
    /* 117:6884 */ 4,
    /* 118:6886 */ 4,
    /* 119:6908 */ 0,
    /* 120:6922 */ 4,
    /* 121:6928 */ 4,
    /* 122:6935 */ 4,
    /* 123:6946 */ 4,
    /* 124:6949 */ 4,
    /* 125:6965 */ 0,
    /* 126:7037 */ 4,
    /* 127:7039 */ 4,
    /* 128:7040 */ 4,
    /* 129:7046 */ 4,
    /* 130:7054 */ 4,
    /* 131:7072 */ 4,
    /* 132:7073 */ 4,
    /* 133:7081 */ 4,
    /* 134:7083 */ 4,
    /* 135:7089 */ 4,
    /* 136:7090 */ 4,
    /* 137:7093 */ 4,
    /* 138:7097 */ 4,
    /* 139:7103 */ 4,
    /* 140:7104 */ 0,
    /* 141:7111 */ 4,
    /* 142:7113 */ 4,
    /* 143:7124 */ 4,
    /* 144:7127 */ 4,
    /* 145:7128 */ 4,
    /* 146:7129 */ 4,
    /* 147:7139 */ 4,
    /* 148:7148 */ 4,
    /* 149:7154 */ 4,
    /* 150:7155 */ 4,
    /* 151:7156 */ 4,
    /* 152:7158 */ 4,
    /* 153:7159 */ 4,
    /* 154:7175 */ 4,
    /* 155:7177 */ 4,
    /* 156:7190 */ 4,
    /* 157:7209 */ 4,
    /* 158:7210 */ 4,
    /* 159:7236 */ 4,
    /* 160:7262 */ 4,
    /* 161:7263 */ 4,
    /* 162:7668 */ 4,
    /* 163:7739 */ 4,
    /* 164:7740 */ 4,
    /* 165:7875 */ 4,
    /* 166:7876 */ 4,
    /* 167:7881 */ 4,
    /* 168:7884 */ 4,
    /* 169:7928 */ 4,
    /* 170:8581 */ 0,
    /* 171:8585 */ 0,
    /* 172:8595 */ 0,
    /* 173:8634 */ 0,
    /* 174:8635 */ 0,
    /* 175:9110 */ 0,
    /* 176:9131 */ 0,
    /* 177:9133 */ 0,
    /* 178:9135 */ 0
};
