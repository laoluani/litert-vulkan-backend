cmake_minimum_required(VERSION 3.18)  #TODO Check Minimum version
project(LiteRtVulkanBackend C CXX)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/LiteRT
)

find_library(LOG_LIB log)


add_library(LiteRtCompilerPlugin_Vulkan SHARED
    src/compiler/vulkan_compiler_plugin.cc
)

target_link_libraries(LiteRtCompilerPlugin_Vulkan
    ${LOG_LIB}
)

add_library(LiteRtDispatch_Vulkan SHARED
    src/dispatch/vulkan_dispatch_api.cc
)

target_link_libraries(LiteRtDispatch_Vulkan
    ${LOG_LIB}
)