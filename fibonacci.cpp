#include "fibonacci.hpp"
#include <iostream>
using namespace std;

int fibonacci(int fibonacciInput) {
    if (fibonacciInput <= 1) {
        // Return the input value if it is less than or equal to 1
        return fibonacciInput;
    }
    // Initialize the first two Fibonacci numbers
    long long a = 0, b = 1, result = 0;
    for (int i = 2; i <= fibonacciInput; ++i) {
        // Calculate the next Fibonacci number
        result = a + b;
        a = b;
        b = result;
    }
    // Returns the nth result
    return result;
}