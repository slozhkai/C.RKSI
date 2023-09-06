#include <iostream>
#include <math.h>

using namespace std;

int main()
{   
    double x = 14.26, y = -1.22, z = 3.5e-2;
    double first = 2.*cos(x-2./3.)/(1./2.+pow(sin(y), 2)) ;
    double second = (1.+ pow(z, 2)/(3.-pow(z, 2)/5.));
    cout<< first * second;
    return 0;
}
