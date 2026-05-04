# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

if(BEMAN_MY_PROJECT_NAME_USE_MODULES)
    target_sources(
        beman.my_project_name
        PUBLIC
            FILE_SET CXX_MODULES FILES my_project_name.cppm
            FILE_SET HEADERS
                FILES
                    config.hpp
                    my_project_name.hpp
                    todo.hpp
                    "${PROJECT_BINARY_DIR}/include/beman/my_project_name/config_generated.hpp"
    )
else()
    target_sources(
        beman.my_project_name
        PUBLIC
            FILE_SET HEADERS
                FILES
                    config.hpp
                    my_project_name.hpp
                    todo.hpp
                    "${PROJECT_BINARY_DIR}/include/beman/my_project_name/config_generated.hpp"
    )
endif()
