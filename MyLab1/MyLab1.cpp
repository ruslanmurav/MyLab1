#include <iostream>
#include <cmath>
using namespace std;

void main()
{
    setlocale(LC_ALL, "RU");
    double x = 0.4 * pow(10, 4), y = -0.875, z = -0.475 * pow(10, -3), s;
    s = pow(abs(cos(x) - cos(y)), (1 + 2 * sin(y) * sin(y))) * (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
    cout << s;
}