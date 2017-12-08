# CMake Basic Sample

This sample shows the required configuration for CMake that builds two executables, `program1`, `program2`, from source.

Both programs use classes contained in the source code, a header-only library ([command line argument parser](https://github.com/jarro2783/cxxopts)) and a shared library ([Armadillo linear algebra](https://github.com/conradsnicta/armadillo-code)).

## System requirements

* Linux OS or Windows 10 with [Linux Bash shell]((https://docs.microsoft.com/en-us/windows/wsl/install-win10))
* CMake
* Make

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