# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

find_package(GTest REQUIRED)

add_executable(beman.foobar.tests.todo)
target_sources(beman.foobar.tests.todo PRIVATE todo.test.cpp)
target_link_libraries(
    beman.foobar.tests.todo
    PRIVATE beman::foobar GTest::gtest GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(beman.foobar.tests.todo)
