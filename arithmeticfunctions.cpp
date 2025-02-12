#include "arithmeticfunctions.h"
#include <cmath>
// Compute x^3
int cube(int x){
    return pow(x,3);
}

// Compute the maximum of x and y
int max(int x, int y){
    if (x > y) return x;
    else return y;
}

// Compute x - y
int difference(int x, int y){
    return x-y;
}