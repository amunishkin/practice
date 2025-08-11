cmake_minimum_required(VERSION 3.22)
project(Windows VERSION 0.1.0 LANGUAGES C CXX)

find_package(Vulkan REQUIRED)

include(FetchContent)

FetchContent_Declare(
    glm
    GIT_REPOSITORY "https://github.com/g-truc/glm.git"
    GIT_TAG "0.9.9.8"
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(glm)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY "https://github.com/gabime/spdlog.git"
    GIT_TAG "v1.12.0"
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY "https://github.com/glfw/glfw.git"
    GIT_TAG "3.3.8"
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(glfw)

FetchContent_Declare(
    mircosoft-gsl
    GIT_REPOSITORY "https://github.com/microsoft/GSL.git"
    GIT_TAG "v4.0.0"
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(mircosoft-gsl)

file(GLOB_RECURSE VulkanEngineSources CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h"
)

include(CTest)
enable_testing()

add_executable(Windows ${VulkanEngineSources})

target_link_libraries(Windows PRIVATE Vulkan::Vulkan)
target_link_libraries(Windows PRIVATE glm)
target_link_libraries(Windows PRIVATE glfw)
target_link_libraries(Windows PRIVATE Microsoft.GSL::GSL)
target_link_libraries(Windows PRIVATE spdlog)

target_include_directories(Windows PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src")

target_compile_features(Windows PRIVATE cxx_std_20)

target_precompile_headers(Windows PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/precomp.h")