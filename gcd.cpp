#include <iostream>
#include "gcd.hpp"

int gcd(int gcdA_par, int gcdB_par) {
    int remainder;
    int gcd;
    // Code executes until gcdB_par reaches 0
    while (gcdB_par != 0) {
        // Calculates the remainder until the greatest common divisor is found
        remainder = gcdA_par % gcdB_par;
        gcdA_par = gcdB_par;
        gcdB_par = remainder;
        gcd = gcdA_par;
    }
    return gcd;
}