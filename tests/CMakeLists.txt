# Find dependencies
find_package(benchmark REQUIRED)
find_package(GTest REQUIRED)

# Make 'release' as default build type
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# Add warning and optimization (-O2) flags for debug and release builds
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O2")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

# Add unit test files here
add_executable(tests
    tests.cpp
    )

# Add benchmark files here
add_executable(benchmark
    benchmark.cpp
    )

# Add library dependencies for benchmark here
target_link_libraries(benchmark
    examplelib
    benchmark::benchmark
    )

# Add library dependencies for unit tests here
target_link_libraries(tests
    examplelib
    gtest
    gtest_main
    pthread
    )
