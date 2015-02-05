#include <iostream>
#include <cmath>
using namespace std;
void radian_to_degree() {
    const double pi = 4.0*atan(1.0);
    float r, d;
    cout << "Number of radians: ";
    cin >> r;
    d = r*(180/pi);
    cout << d << " degrees \n";
}
