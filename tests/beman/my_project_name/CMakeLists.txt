# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

find_package(GTest REQUIRED)

add_executable(beman.my_project_name.tests.todo)
target_sources(beman.my_project_name.tests.todo PRIVATE todo.test.cpp)
target_link_libraries(
    beman.my_project_name.tests.todo
    PRIVATE beman::my_project_name GTest::gtest_main
)
if(BEMAN_EXEMPLAR_USE_MODULES)
    set_target_properties(
        beman.my_project_name.tests.todo
        PROPERTIES CXX_MODULE_STD ON
    )
endif()

include(GoogleTest)
gtest_discover_tests(beman.my_project_name.tests.todo DISCOVERY_TIMEOUT 60)
