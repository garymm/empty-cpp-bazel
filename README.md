# empty-cpp-bazel
Empty C++ project building and testing with Bazel.

## Set up

If you have any trouble with the set-up, please make a note of what did and didn't work so we can improve these instructions.

The [.devcontainer](.devcontainer) directory configures a container that has all the required tools to build and test.
Instructions for:
* [VS Code](https://code.visualstudio.com/docs/devcontainers/containers)
* [Visual Studio](https://devblogs.microsoft.com/cppblog/dev-containers-for-c-in-visual-studio/)
* [CLion / IntelliJ](https://www.jetbrains.com/help/idea/connect-to-devcontainer.html)

Once your container is running, verify that you can build and test by running this inside the container:
```sh
bazel test //...
```

The first time this runs, it will download dependencies which will take a while.
Subsequent runs will be much faster.

### Optional: IDE auto-completion

Create a compilation database (i.e. `compile_commands.json`):

```sh
bazel run //:refresh_compile_commands && bazel build //...
```

If you use VS Code (or Cursor), the settings and recommended extensions in the repo should enable
IntelliSense (once you run the above command to create the compilation database).

For other editors, you can use [clangd](https://clangd.llvm.org/installation.html) or any IDE that supports compile_commands.json.

## Languages and Libraries

[Boost UT](https://boost-ext.github.io/ut/) for unit testing.

[C++23](https://en.cppreference.com) (though it's not all [supported](https://en.cppreference.com/w/cpp/compiler_support/23) by the toolchain yet).

LLVM / Clang 19 toolchain (specified in [MODULE.bazel](MODULE.bazel)).
