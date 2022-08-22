#include <benchmark/benchmark.h>

#include "something.h"

static void BM_Test(benchmark::State& state)
{
    TestClass t;
    for(auto _ : state)
    {
        const std::string str = t.getStr();
        benchmark::DoNotOptimize(str);
    }
}

BENCHMARK(BM_Test);

BENCHMARK_MAIN();
