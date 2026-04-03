# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

set(ALL_EXAMPLES todo)
message("Examples to be built: ${ALL_EXAMPLES}")

foreach(example ${ALL_EXAMPLES})
    add_executable(beman.my_project_name.examples.${example})
    target_sources(beman.my_project_name.examples.${example} PRIVATE ${example}.cpp)
    target_link_libraries(
        beman.my_project_name.examples.${example}
        PRIVATE beman::my_project_name
    )
endforeach()
