#include "litert/c/litert_common.h"
#include "litert/vendors/c/litert_compiler_plugin.h"

// https://github.com/google-ai-edge/LiteRT/blob/36aa63d9bf2b6c609414083042237b7262e28faf/litert/COMPILER_PLUGIN.md


// Name associated with the manufacturer this plugin relates to.
LITERT_CAPI_EXPORT const char* LiteRtGetCompilerPluginSocManufacturer() {
  return "Vulkan";
}

// Create and initialize the plugin instance.
LITERT_CAPI_EXPORT LiteRtStatus LiteRtCreateCompilerPlugin(
    LiteRtCompilerPlugin* compiler_plugin,
    LiteRtEnvironmentOptions env, 
    LiteRtOptions options);


// Select desired ops for compilation.
// This is the PARTITION step.
LITERT_CAPI_EXPORT LiteRtStatus LiteRtCompilerPluginPartition(
    LiteRtCompilerPlugin compiler_plugin, const char* soc_model,
    LiteRtSubgraph subgraph, LiteRtOpList selected_ops);

// Prepare result to pass to the runtime for given model containing partitioned
// subgraphs. This is the COMPILE step.
LITERT_CAPI_EXPORT LiteRtStatus LiteRtCompilerPluginCompile(
    LiteRtCompilerPlugin compiler_plugin, const char* soc_model,
    LiteRtModel partitions, LiteRtCompiledResult* compiled_result);


LITERT_CAPI_EXPORT void LiteRtDestroyCompilerPlugin(LiteRtCompilerPlugin compiler_plugin);
