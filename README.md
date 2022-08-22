# TestBenchCpp
Simple out of the box setup for unit testing and benchmarking C++ using
Google Test and Google Benchmark. It uses C++17 standard as a default.

### Why?
This is useful when you need a working build setup fast without losing your
creativity.

## Building TestBenchCpp
### Dependencies
Make sure you have installed libgtest-dev and libbenchmark-dev packages.
### Fetch sources
```
git clone https://github.com/mattilaa/testbenchcpp
```
### Building using CMake
```
cd testbenchcpp
mkdir build
cd build
cmake ..
make
```
If you have Ninja installed, you can build with Ninja just by replacing last
two steps.
```
cmake .. -G Ninja
ninja
```
## Testing
There are two template test files: tests/tests.cpp for unit testing with Google Test,
and tests/benchmark.cpp for testing using Google Benchmark.

After build, binaries for both are located in build/tests directory.

Happy testing :)
