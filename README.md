# cmake-sanitizer demo

`cmake-sanitizer-demo` modules to help use sanitizers, this repo depends on
[sanitizers-cmake](https://github.com/arsenm/sanitizers-cmake).

Please refer to github repo [sanitizers-cmake](https://github.com/arsenm/sanitizers-cmake) for more details.

# Running

Clone the repo, install dependencies, and serve:
```
git clone --recursive  git@github.com:Junbo-Zheng/cmake_sanitizer_demo.git
sudo apt-get install -y cmake clang gcc
sudo apt-get install -y ninja-build
```

# Build

- with make
```
$ mkdir -p build
$ cd build
$ cmake .. -DSANITIZE_ADDRESS=On
$ make -j16
$ ./test
```
Or even better, as follow:
```
$ cmake -H. -Bbuild -DSANITIZE_ADDRESS=On
$ cd build && make -16
$ ./test
```

And also, **`cmake -H. -Bbuild`** is equal to the following command:
```
$ mkdir -p build
$ cd build
$ cmake ..
```

- with ninja
```
$ mkdir -p build
$ cd build
$ cmake -G Ninja .. -DSANITIZE_ADDRESS=On
$ cmake --build .
$ ./test
```

You can enable the sanitizers with `SANITIZE_ADDRESS`, `SANITIZE_MEMORY` `SANITIZE_THREAD` or `SANITIZE_UNDEFINED` options in your `CMake` configuration. You can do this by passing e.g. `-DSANITIZE_ADDRESS=On` on your command line or with your build options. More details refer to [here](https://github.com/arsenm/sanitizers-cmake/blob/master/README.md#usage).
