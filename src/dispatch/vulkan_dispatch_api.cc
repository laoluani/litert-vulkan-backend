#include "litert/c/litert_common.h"
#include "litert/vendors/c/litert_dispatch_api.h"

// https://github.com/google-ai-edge/LiteRT/blob/36aa63d9bf2b6c609414083042237b7262e28faf/litert/DISPATCH_API.md

LiteRtStatus
LiteRtDispatchDeviceContextCreate(LiteRtDispatchDeviceContext* device_context);

LiteRtStatus
LiteRtDispatchDeviceContextDestroy(LiteRtDispatchDeviceContext device_context);

 LiteRtStatus LiteRtDispatchRegisterTensorBuffer(
    LiteRtDispatchDeviceContext device_context,
    LiteRtTensorBuffer tensor_buffer,
    LiteRtTensorBufferHandle* tensor_buffer_handle);

LiteRtStatus LiteRtDispatchUnregisterTensorBuffer(
    LiteRtDispatchDeviceContext device_context,
    LiteRtTensorBufferHandle tensor_buffer_handle);