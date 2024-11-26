#include <iostream>
#include "factorial.hpp"
#include "power.hpp"
#include "fibonacci.hpp"
#include "gcd.hpp"
#include "benchmark.hpp"    

using namespace std;

int main()
{
    // Factorial Benchmark
    double factorialInput = 25;
    cout << endl
         << "Factorial of " << factorialInput << endl;
    benchmarkFunction("Factorial", [=]()
                      { cout << "Result: " << factorial(factorialInput) << endl; });

    // Power Benchmark
    double base = 9.0;
    int exponent = 90;
    cout << endl
         << base << " raised to " << exponent << endl;
    benchmarkFunction("Power", [=]()
                      { cout << "Result: " << power(base, exponent) << endl; });

    // Fibonacci Benchmark
    int fibonacciInput = 40;
    cout << endl
         << "Fibonacci sequence # " << fibonacciInput << endl;
    benchmarkFunction("Fibonacci", [=]()
                      { cout << "Result: " << fibonacci(fibonacciInput) << endl; }); 

    // GCD Benchmark
    int gcdA = 12, gcdB = 996;
    cout << endl
         << "Greatest Common Divisor of " << gcdA << " and " << gcdB << endl;
    benchmarkFunction("GCD", [=]()
                      { cout << "Result: " << gcd(gcdA, gcdB) << endl; });

    return 0;
}
