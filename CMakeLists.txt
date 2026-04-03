# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

cmake_minimum_required(VERSION 3.30...4.3)

project(
    beman.my_project_name # CMake Project Name, which is also the name of the top-level
    # targets (e.g., library, executable, etc.).
    DESCRIPTION "Short project description."
    LANGUAGES CXX
    VERSION 0.1.0
)

# [CMAKE.SKIP_TESTS]
option(
    BEMAN_MY_PROJECT_NAME_BUILD_TESTS
    "Enable building tests and test infrastructure. Default: ${PROJECT_IS_TOP_LEVEL}. Values: { ON, OFF }."
    ${PROJECT_IS_TOP_LEVEL}
)

# [CMAKE.SKIP_EXAMPLES]
option(
    BEMAN_MY_PROJECT_NAME_BUILD_EXAMPLES
    "Enable building examples. Default: ${PROJECT_IS_TOP_LEVEL}. Values: { ON, OFF }."
    ${PROJECT_IS_TOP_LEVEL}
)

# for find of beman-install-library
include(infra/cmake/beman-install-library.cmake)

add_library(beman.my_project_name INTERFACE)
add_library(beman::my_project_name ALIAS beman.my_project_name)

target_sources(
    beman.my_project_name
    PUBLIC FILE_SET HEADERS BASE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

set_target_properties(
    beman.my_project_name
    PROPERTIES VERIFY_INTERFACE_HEADER_SETS ${PROJECT_IS_TOP_LEVEL}
)

add_subdirectory(include/beman/my_project_name)

beman_install_library(beman.my_project_name TARGETS beman.my_project_name)

if(BEMAN_MY_PROJECT_NAME_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests/beman/my_project_name)
endif()

if(BEMAN_MY_PROJECT_NAME_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()
