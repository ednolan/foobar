// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef BEMAN_MY_PROJECT_NAME_TODO_HPP
#define BEMAN_MY_PROJECT_NAME_TODO_HPP

#include <beman/my_project_name/config.hpp>

#if BEMAN_MY_PROJECT_NAME_USE_MODULES() && !defined(BEMAN_MY_PROJECT_NAME_INCLUDED_FROM_INTERFACE_UNIT)

import beman.my_project_name;

#else

namespace beman::my_project_name {

// TODO

} // namespace beman::my_project_name

#endif // BEMAN_MY_PROJECT_NAME_USE_MODULES() &&
       // !defined(BEMAN_MY_PROJECT_NAME_INCLUDED_FROM_INTERFACE_UNIT)

#endif // BEMAN_MY_PROJECT_NAME_TODO_HPP
