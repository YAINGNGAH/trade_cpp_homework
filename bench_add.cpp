/**
    \brief Benchmark
*/
#include <benchmark/benchmark.h>

#include "my_add.hpp"

static void BM_Add(benchmark::State& state) {
  for (auto _ : state) {
    my_add(std::rand(), std::rand());
  }
}



BENCHMARK(BM_Add);

BENCHMARK_MAIN();