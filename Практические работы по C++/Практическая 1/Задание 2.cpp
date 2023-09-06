#include <iostream>
#include <math.h>

using namespace std;

int main()
{   
    double x = -4.5, y = .75e-4, z = -0.845e2;
    double first = cbrt(9. + pow(x - y, 2)) / (pow(x, 2) + pow(y, 2)  + 2.) ;
    double second = exp(abs(x-y)) * pow(tan(z), 3);
    cout<< first - second;
    return 0;
}
