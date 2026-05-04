export module beman.my_project_name;

import std;

#define BEMAN_MY_PROJECT_NAME_INCLUDED_FROM_INTERFACE_UNIT
export {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winclude-angled-in-module-purview"
#include <beman/my_project_name/my_project_name.hpp>
#pragma clang diagnostic pop
}
