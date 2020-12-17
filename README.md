# CMake Example of dynamic libs

### Structure:

There are 3 folders:
- **/A** with *CMakeLists.txt* and *preparing.py* (which generates *index.h*)
- **/B** with *CMakeLists.txt*, *lib.h* and its header *lib.cpp*
- **/C** with *main.h* and *main.cpp* that use two previous libs

### Build:

From anywhere type:
```
mkdir build
cd build
cmake [path/to/root/folder]
make
```

This generates folders **/lib** with `.dylib` files and **/bin** with `build` as executable of `main.cpp`.

### Credits

Thanks to [@akhtyamovpavel](https://github.com/akhtyamovpavel) for provided task.