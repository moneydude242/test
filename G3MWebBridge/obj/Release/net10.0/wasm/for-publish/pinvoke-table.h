// GENERATED FILE, DO NOT MODIFY (PInvokeTableGenerator.cs)
#include <mono/utils/details/mono-error-types.h>
#include <mono/metadata/assembly.h>
#include <mono/utils/mono-error.h>
#include <mono/metadata/object.h>
#include <mono/utils/details/mono-logger-types.h>
#include "runtime.h"
#include "pinvoke.h"

uint32_t CompressionNative_Crc32 (uint32_t, void *, int32_t);

int32_t CompressionNative_Deflate (void *, int32_t);

int32_t CompressionNative_DeflateEnd (void *);

int32_t CompressionNative_DeflateInit2_ (void *, int32_t, int32_t, int32_t, int32_t, int32_t);

int32_t CompressionNative_Inflate (void *, int32_t);

int32_t CompressionNative_InflateEnd (void *);

int32_t CompressionNative_InflateInit2_ (void *, int32_t);

int32_t CompressionNative_InflateReset2_ (void *, int32_t);

int32_t SystemNative_CanGetHiddenFlag ();

int32_t SystemNative_Close (void *);

int32_t SystemNative_CloseDir (void *);

int32_t SystemNative_ConvertErrorPalToPlatform (int32_t);

int32_t SystemNative_ConvertErrorPlatformToPal (int32_t);

void * SystemNative_Dup (void *);

int32_t SystemNative_FAllocate (void *, int64_t, int64_t);

int32_t SystemNative_FLock (void *, int32_t);

int32_t SystemNative_FStat (void *, void *);

int32_t SystemNative_FSync (void *);

int32_t SystemNative_FTruncate (void *, int64_t);

void SystemNative_Free (void *);

int32_t SystemNative_GetCryptographicallySecureRandomBytes (void *, int32_t);

void * SystemNative_GetCwd (void *, int32_t);

void * SystemNative_GetEnv (void *);

int32_t SystemNative_GetErrNo ();

uint32_t SystemNative_GetFileSystemType (void *);

int64_t SystemNative_GetLowResolutionTimestamp ();

void SystemNative_GetNonCryptographicallySecureRandomBytes (void *, int32_t);

int64_t SystemNative_GetSystemTimeAsTicks ();

void * SystemNative_GetTimeZoneData (void *, void *);

int64_t SystemNative_GetTimestamp ();

int32_t SystemNative_LChflagsCanSetHiddenFlag ();

int64_t SystemNative_LSeek (void *, int64_t, int32_t);

int32_t SystemNative_LStat (void *, void *);

void SystemNative_LowLevelMonitor_Acquire (void *);

void * SystemNative_LowLevelMonitor_Create ();

void SystemNative_LowLevelMonitor_Destroy (void *);

void SystemNative_LowLevelMonitor_Release (void *);

void SystemNative_LowLevelMonitor_Signal_Release (void *);

int32_t SystemNative_LowLevelMonitor_TimedWait (void *, int32_t);

void SystemNative_LowLevelMonitor_Wait (void *);

void * SystemNative_Malloc (void *);

int32_t SystemNative_MkDir (void *, int32_t);

void * SystemNative_Open (void *, int32_t, int32_t);

void * SystemNative_OpenDir (void *);

int32_t SystemNative_PRead (void *, void *, int32_t, int64_t);

int64_t SystemNative_PReadV (void *, void *, int32_t, int64_t);

int32_t SystemNative_PWrite (void *, void *, int32_t, int64_t);

int64_t SystemNative_PWriteV (void *, void *, int32_t, int64_t);

int32_t SystemNative_PosixFAdvise (void *, int64_t, int64_t, int32_t);

int32_t SystemNative_Read (void *, void *, int32_t);

int32_t SystemNative_ReadDir (void *, void *);

int32_t SystemNative_ReadLink (void *, void *, int32_t);

int32_t SystemNative_RmDir (void *);

int32_t SystemNative_SchedGetCpu ();

void SystemNative_SetErrNo (int32_t);

int32_t SystemNative_Stat (void *, void *);

void * SystemNative_StrErrorR (int32_t, void *, int32_t);

uint32_t SystemNative_TryGetUInt32OSThreadId ();

int32_t SystemNative_Unlink (void *);

int32_t SystemNative_Write (void *, void *, int32_t);

static PinvokeImport libSystem_Globalization_Native_imports [] = {
    {NULL, NULL}
};

static PinvokeImport libSystem_IO_Compression_Native_imports [] = {
    {"CompressionNative_Crc32", CompressionNative_Crc32}, // System.IO.Compression
    {"CompressionNative_Deflate", CompressionNative_Deflate}, // System.IO.Compression
    {"CompressionNative_DeflateEnd", CompressionNative_DeflateEnd}, // System.IO.Compression
    {"CompressionNative_DeflateInit2_", CompressionNative_DeflateInit2_}, // System.IO.Compression
    {"CompressionNative_Inflate", CompressionNative_Inflate}, // System.IO.Compression
    {"CompressionNative_InflateEnd", CompressionNative_InflateEnd}, // System.IO.Compression
    {"CompressionNative_InflateInit2_", CompressionNative_InflateInit2_}, // System.IO.Compression
    {"CompressionNative_InflateReset2_", CompressionNative_InflateReset2_}, // System.IO.Compression
    {NULL, NULL}
};

static PinvokeImport libSystem_Native_imports [] = {
    {"SystemNative_CanGetHiddenFlag", SystemNative_CanGetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_Close", SystemNative_Close}, // System.Private.CoreLib
    {"SystemNative_CloseDir", SystemNative_CloseDir}, // System.Private.CoreLib
    {"SystemNative_ConvertErrorPalToPlatform", SystemNative_ConvertErrorPalToPlatform}, // System.Console, System.Private.CoreLib
    {"SystemNative_ConvertErrorPlatformToPal", SystemNative_ConvertErrorPlatformToPal}, // System.Console, System.Private.CoreLib
    {"SystemNative_Dup", SystemNative_Dup}, // System.Console
    {"SystemNative_FAllocate", SystemNative_FAllocate}, // System.Private.CoreLib
    {"SystemNative_FLock", SystemNative_FLock}, // System.Private.CoreLib
    {"SystemNative_FStat", SystemNative_FStat}, // System.Private.CoreLib
    {"SystemNative_FSync", SystemNative_FSync}, // System.Private.CoreLib
    {"SystemNative_FTruncate", SystemNative_FTruncate}, // System.Private.CoreLib
    {"SystemNative_Free", SystemNative_Free}, // System.Private.CoreLib
    {"SystemNative_GetCryptographicallySecureRandomBytes", SystemNative_GetCryptographicallySecureRandomBytes}, // System.Private.CoreLib, System.Security.Cryptography
    {"SystemNative_GetCwd", SystemNative_GetCwd}, // System.Private.CoreLib
    {"SystemNative_GetEnv", SystemNative_GetEnv}, // System.Private.CoreLib
    {"SystemNative_GetErrNo", SystemNative_GetErrNo}, // System.Private.CoreLib
    {"SystemNative_GetFileSystemType", SystemNative_GetFileSystemType}, // System.Private.CoreLib
    {"SystemNative_GetLowResolutionTimestamp", SystemNative_GetLowResolutionTimestamp}, // System.Private.CoreLib
    {"SystemNative_GetNonCryptographicallySecureRandomBytes", SystemNative_GetNonCryptographicallySecureRandomBytes}, // System.Private.CoreLib
    {"SystemNative_GetSystemTimeAsTicks", SystemNative_GetSystemTimeAsTicks}, // System.Private.CoreLib
    {"SystemNative_GetTimeZoneData", SystemNative_GetTimeZoneData}, // System.Private.CoreLib
    {"SystemNative_GetTimestamp", SystemNative_GetTimestamp}, // System.Private.CoreLib
    {"SystemNative_LChflagsCanSetHiddenFlag", SystemNative_LChflagsCanSetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_LSeek", SystemNative_LSeek}, // System.Private.CoreLib
    {"SystemNative_LStat", SystemNative_LStat}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Acquire", SystemNative_LowLevelMonitor_Acquire}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Create", SystemNative_LowLevelMonitor_Create}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Destroy", SystemNative_LowLevelMonitor_Destroy}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Release", SystemNative_LowLevelMonitor_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Signal_Release", SystemNative_LowLevelMonitor_Signal_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_TimedWait", SystemNative_LowLevelMonitor_TimedWait}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Wait", SystemNative_LowLevelMonitor_Wait}, // System.Private.CoreLib
    {"SystemNative_Malloc", SystemNative_Malloc}, // System.Private.CoreLib
    {"SystemNative_MkDir", SystemNative_MkDir}, // System.Private.CoreLib
    {"SystemNative_Open", SystemNative_Open}, // System.Private.CoreLib
    {"SystemNative_OpenDir", SystemNative_OpenDir}, // System.Private.CoreLib
    {"SystemNative_PRead", SystemNative_PRead}, // System.Private.CoreLib
    {"SystemNative_PReadV", SystemNative_PReadV}, // System.Private.CoreLib
    {"SystemNative_PWrite", SystemNative_PWrite}, // System.Private.CoreLib
    {"SystemNative_PWriteV", SystemNative_PWriteV}, // System.Private.CoreLib
    {"SystemNative_PosixFAdvise", SystemNative_PosixFAdvise}, // System.Private.CoreLib
    {"SystemNative_Read", SystemNative_Read}, // System.Private.CoreLib
    {"SystemNative_ReadDir", SystemNative_ReadDir}, // System.Private.CoreLib
    {"SystemNative_ReadLink", SystemNative_ReadLink}, // System.Private.CoreLib
    {"SystemNative_RmDir", SystemNative_RmDir}, // System.Private.CoreLib
    {"SystemNative_SchedGetCpu", SystemNative_SchedGetCpu}, // System.Private.CoreLib
    {"SystemNative_SetErrNo", SystemNative_SetErrNo}, // System.Private.CoreLib
    {"SystemNative_Stat", SystemNative_Stat}, // System.Private.CoreLib
    {"SystemNative_StrErrorR", SystemNative_StrErrorR}, // System.Console, System.Private.CoreLib
    {"SystemNative_TryGetUInt32OSThreadId", SystemNative_TryGetUInt32OSThreadId}, // System.Private.CoreLib
    {"SystemNative_Unlink", SystemNative_Unlink}, // System.Private.CoreLib
    {"SystemNative_Write", SystemNative_Write}, // System.Console, System.Private.CoreLib
    {NULL, NULL}
};

static PinvokeTable pinvoke_tables[] = {
    {"libSystem.Globalization.Native", libSystem_Globalization_Native_imports, 0},
    {"libSystem.IO.Compression.Native", libSystem_IO_Compression_Native_imports, 8},
    {"libSystem.Native", libSystem_Native_imports, 52}
};

InterpFtnDesc wasm_native_to_interp_ftndescs[3] = {};

void
wasm_native_to_interp_System_Private_CoreLib_System_Threading_ThreadPool_BackgroundJobHandler () {
    typedef void (*InterpEntry_T0) (int*);

    if (!(InterpEntry_T0)wasm_native_to_interp_ftndescs [0].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Threading", "ThreadPool", "BackgroundJobHandler", 100669788, 0);
    }

    ((InterpEntry_T0)wasm_native_to_interp_ftndescs [0].func) ((int*)wasm_native_to_interp_ftndescs [0].arg);
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_GetFunctionPointer (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T1) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T1)wasm_native_to_interp_ftndescs [1].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "GetFunctionPointer", 100663449, 6);
    }

    ((InterpEntry_T1)wasm_native_to_interp_ftndescs [1].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [1].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Threading_TimerQueue_TimerHandler () {
    typedef void (*InterpEntry_T2) (int*);

    if (!(InterpEntry_T2)wasm_native_to_interp_ftndescs [2].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Threading", "TimerQueue", "TimerHandler", 100669814, 0);
    }

    ((InterpEntry_T2)wasm_native_to_interp_ftndescs [2].func) ((int*)wasm_native_to_interp_ftndescs [2].arg);
}

static UnmanagedExport wasm_native_to_interp_table[] = {
    {"BackgroundJobHandler#0:System.Private.CoreLib:System.Threading:ThreadPool", 100669788, wasm_native_to_interp_System_Private_CoreLib_System_Threading_ThreadPool_BackgroundJobHandler},
    {"GetFunctionPointer#6:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663449, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_GetFunctionPointer},
    {"TimerHandler#0:System.Private.CoreLib:System.Threading:TimerQueue", 100669814, wasm_native_to_interp_System_Private_CoreLib_System_Threading_TimerQueue_TimerHandler}
};
