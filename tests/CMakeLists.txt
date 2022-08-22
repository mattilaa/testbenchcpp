# Find dependencies
find_package(benchmark REQUIRED)
find_package(GTest REQUIRED)

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
