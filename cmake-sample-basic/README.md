# CMake Basic Sample

This sample shows the required configuration for CMake that builds two executables, `program1`, `program2`, 
from source.

Both programs use classes contained in the source code, a header-only library and a static library (.so).

## Running the sample

```bash
$ cd cmake-sample-basic
$ mkdir build
$ cd build
$ cmake ../
$ make
$ ./program1
$ ./program2
```

## References

- [Official CMake Tutorial](https://cmake.org/cmake-tutorial/)
- [CMake Tutorial from JetBrains](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html)