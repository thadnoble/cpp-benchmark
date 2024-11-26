#include <iostream>
#include <chrono>
#include <functional>
#include <string>
#include "benchmark.hpp"

void benchmarkFunction(const std::string &functionName, std::function<void()> func) {
    auto start = std::chrono::high_resolution_clock::now();
    func();
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds> (end - start);
    std::cout << functionName << " took " << duration.count() << " nanoseconds. \n";
}