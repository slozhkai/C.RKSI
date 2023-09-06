#include <iostream>
#include <math.h>
using namespace std;

int
main ()
{
  double x = -15.246, y = 4.642e-2, z = 21.;
  double first = log (pow (y, -sqrt (abs (x)))) * (x - y / 2.),
    second = pow (sin (atan (z)), 2);
  double s = first + second;
  cout << s;

  return 0;
}
