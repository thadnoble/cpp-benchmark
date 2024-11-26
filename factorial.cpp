#include <iostream>
#include "factorial.hpp"

double factorial(double factorialInput_par) {
    double factorialResult = 1;
    for (int i = 1; i <= factorialInput_par; i++) {
        // Multiplies factorialResult with i until i is equal to factorialInput_par
        factorialResult *= i;
    }
    return factorialResult;
}
