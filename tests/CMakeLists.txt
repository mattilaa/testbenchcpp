find_package(benchmark REQUIRED)
find_package(GTest REQUIRED)

add_executable(tests
    tests.cpp
    )

add_executable(benchmark
    benchmark.cpp
    )

target_link_libraries(benchmark benchmark::benchmark)
target_link_libraries(tests gtest pthread gtest_main)
