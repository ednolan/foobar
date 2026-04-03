# beman.my_project_name: Short project description.

<!--
SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
-->

<!-- markdownlint-disable-next-line line-length -->
![Library Status](https://raw.githubusercontent.com/bemanproject/beman/refs/heads/main/images/badges/beman_badge-beman_library_under_development.svg) ![Continuous Integration Tests](https://github.com/bemanproject/my_project_name/actions/workflows/ci_tests.yml/badge.svg) ![Lint Check (pre-commit)](https://github.com/bemanproject/my_project_name/actions/workflows/pre-commit-check.yml/badge.svg) [![Coverage](https://coveralls.io/repos/github/bemanproject/my_project_name/badge.svg?branch=main)](https://coveralls.io/github/bemanproject/my_project_name?branch=main) ![Standard Target](https://github.com/bemanproject/beman/blob/main/images/badges/cpp29.svg) [![Compiler Explorer Example](https://img.shields.io/badge/Try%20it%20on%20Compiler%20Explorer-grey?logo=compilerexplorer&logoColor=67c52a)](https://www.example.com)

`beman.my_project_name` is a minimal C++ library conforming to [The Beman Standard](https://github.com/bemanproject/beman/blob/main/docs/beman_standard.md).
This can be used as a template for those intending to write Beman libraries.
It may also find use as a minimal and modern  C++ project structure.

**Implements**: `std::todo` proposed in [TODO (PnnnnRr)](https://wg21.link/PnnnnRr).

**Status**: [Under development and not yet ready for production use.](https://github.com/bemanproject/beman/blob/main/docs/beman_library_maturity_model.md#under-development-and-not-yet-ready-for-production-use)

## License

`beman.my_project_name` is licensed under the Apache License v2.0 with LLVM Exceptions.

## Usage

TODO

Full runnable examples can be found in [`examples/`](examples/).

## Dependencies

### Build Environment

This project requires at least the following to build:

* A C++ compiler that conforms to the C++20 standard or greater
* CMake 3.30 or later
* (Test Only) GoogleTest

You can disable building tests by setting CMake option `BEMAN_MY_PROJECT_NAME_BUILD_TESTS` to
`OFF` when configuring the project.

### Supported Platforms

| Compiler   | Version | C++ Standards | Standard Library  |
|------------|---------|---------------|-------------------|
| GCC        | 15-13   | C++26-C++17   | libstdc++         |
| GCC        | 12-11   | C++23-C++17   | libstdc++         |
| Clang      | 22-19   | C++26-C++17   | libstdc++, libc++ |
| Clang      | 18-17   | C++26-C++17   | libc++            |
| Clang      | 18-17   | C++20, C++17  | libstdc++         |
| AppleClang | latest  | C++26-C++17   | libc++            |
| MSVC       | latest  | C++23         | MSVC STL          |

## Development

See the [Contributing Guidelines](CONTRIBUTING.md).

## Integrate beman.my_project_name into your project

### Build

You can build my_project_name using a CMake workflow preset:

```bash
cmake --workflow --preset gcc-release
```

To list available workflow presets, you can invoke:

```bash
cmake --list-presets=workflow
```

For details on building beman.my_project_name without using a CMake preset, refer to the
[Contributing Guidelines](CONTRIBUTING.md).

### Installation

To install beman.my_project_name globally after building with the `gcc-release` preset, you can
run:

```bash
sudo cmake --install build/gcc-release
```

Alternatively, to install to a prefix, for example `/opt/beman`, you can run:

```bash
sudo cmake --install build/gcc-release --prefix /opt/beman
```

This will generate the following directory structure:

```txt
/opt/beman
├── include
│   └── beman
│       └── my_project_name
│           ├── my_project_name.hpp
│           └── ...
└── lib
    └── cmake
        └── beman.my_project_name
            ├── beman.my_project_name-config-version.cmake
            ├── beman.my_project_name-config.cmake
            └── beman.my_project_name-targets.cmake
```

### CMake Configuration

If you installed beman.my_project_name to a prefix, you can specify that prefix to your CMake
project using `CMAKE_PREFIX_PATH`; for example, `-DCMAKE_PREFIX_PATH=/opt/beman`.

You need to bring in the `beman.my_project_name` package to define the `beman::my_project_name` CMake
target:

```cmake
find_package(beman.my_project_name REQUIRED)
```

You will then need to add `beman::my_project_name` to the link libraries of any libraries or
executables that include `beman.my_project_name` headers.

```cmake
target_link_libraries(yourlib PUBLIC beman::my_project_name)
```

### Using beman.my_project_name

To use `beman.my_project_name` in your C++ project,
include an appropriate `beman.my_project_name` header from your source code.

```c++
#include <beman/my_project_name/my_project_name.hpp>
```

> [!NOTE]
>
> `beman.my_project_name` headers are to be included with the `beman/my_project_name/` prefix.
> Altering include search paths to spell the include target another way (e.g.
> `#include <my_project_name.hpp>`) is unsupported.
