# CMake Basic Sample

This sample shows the required configuration for CMake that builds two executables, `program1`, `program2`, from source.

Both programs use classes contained in the source code, a header-only library ([command line argument parser](https://github.com/jarro2783/cxxopts)) and a shared library ([Armadillo linear algebra](https://github.com/conradsnicta/armadillo-code)).

## Running the sample

```bash
$ cd cmake-sample-basic
$ mkdir build
$ cd build
$ cmake ../
$ make
$ ./program1
$ ./program2 --arg=SomeRandomValue
```

## References

- [Official CMake Tutorial](https://cmake.org/cmake-tutorial/)
- [CMake Tutorial from JetBrains](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html)