#include <iostream>
#include <math.h>

using namespace std;

int main()
{   
    double 
        x = 0.4e4, 
        y = -0.875, 
        z = -0.475e-3;
        
    double 
        first = pow(abs(cos(x) - cos(y)), (1 + 2 * pow(sin(y), 2))),
        second = 1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4;
        
    double s = first * second;
    cout<< s;

    return 0;
}