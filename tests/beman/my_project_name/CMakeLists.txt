# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

find_package(GTest REQUIRED)

add_executable(beman.my_project_name.tests.todo)
target_sources(beman.my_project_name.tests.todo PRIVATE todo.test.cpp)
target_link_libraries(
    beman.my_project_name.tests.todo
    PRIVATE beman::my_project_name GTest::gtest GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(beman.my_project_name.tests.todo)
