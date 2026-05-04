// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef BEMAN_MY_PROJECT_NAME_MY_PROJECT_NAME_HPP
#define BEMAN_MY_PROJECT_NAME_MY_PROJECT_NAME_HPP

#include <beman/my_project_name/config.hpp>

#if BEMAN_MY_PROJECT_NAME_USE_MODULES() && !defined(BEMAN_MY_PROJECT_NAME_INCLUDED_FROM_INTERFACE_UNIT)

import beman.my_project_name;

#else

    #include <beman/my_project_name/todo.hpp>

#endif // BEMAN_MY_PROJECT_NAME_USE_MODULES() &&
       // !defined(BEMAN_MY_PROJECT_NAME_INCLUDED_FROM_INTERFACE_UNIT)

#endif // BEMAN_MY_PROJECT_NAME_MY_PROJECT_NAME_HPP
