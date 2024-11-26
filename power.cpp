#include "power.hpp"
#include <iostream>
#include <cmath>
using namespace std;

double power(double base, double exponent){
    double result = 1;
    for(int i = 1; i <= exponent;i++){
        // Continuously multiplies the result by the base
        result *= base;
    }
    return result;
}