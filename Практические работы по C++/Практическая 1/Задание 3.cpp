#include <iostream>
#include <math.h>

using namespace std;

int main()
{   
    double 
        x = 3.74e-2, 
        y = -0.825, 
        z = 0.16e2;
    double 
        first = ((1. + pow(sin(x + y), 2))/abs(x - 2. * y /(1 + pow(x, 2) * pow(y, 2))))*pow(x, abs(y)),
        second = pow(cos(atan(1/z)), 2);
    double s = first + second;
    cout<< s;
    return 0;
}
