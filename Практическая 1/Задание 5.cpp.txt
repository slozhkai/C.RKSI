#include <iostream>
#include <math.h>

using namespace std;

int main()
{   
    double 
        x = -15.246, 
        y = 4.642e-2, 
        z = 21;
        
    double 
        first = log(pow(y, -sqrt(ads(x)))),
        second = 1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4;
        
    double s = first * second;
    cout<< s;

    return 0;
}