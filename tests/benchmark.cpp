#include <benchmark/benchmark.h>

static void BM_Test(benchmark::State& state)
{
    for(auto _ : state)
    {
        const std::string str {"Hello World!"};
        benchmark::DoNotOptimize(str);
    }
}

BENCHMARK(BM_Test);

BENCHMARK_MAIN();
