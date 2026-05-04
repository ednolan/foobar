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
    if(BEMAN_MY_PROJECT_NAME_USE_MODULES)
        set_target_properties(
            beman.my_project_name.examples.${example}
            PROPERTIES CXX_MODULE_STD ON
        )
    endif()
endforeach()
