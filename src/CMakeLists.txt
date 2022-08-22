# Create example lib for unit testing

set(SOURCE_LIST
    "${TestBench_SOURCE_DIR}/src/something.cpp"
    )

set(HEADER_LIST
    "${TestBench_SOURCE_DIR}/include/something.h"
    )

add_library(examplelib
    ${SOURCE_LIST}
    ${HEADER_LIST})

target_include_directories(examplelib PUBLIC
    "${TestBench_SOURCE_DIR}/include"
    )

