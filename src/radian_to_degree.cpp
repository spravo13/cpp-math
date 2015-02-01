#include <iostream>
#include <cmath>
void radian_to_degree() {
    const double pi = 4.0*atan(1.0);
    using namespace std;
    float r, d;
    cout << "Enter the number of radians: ";
    cin >> r;
    d = r*(180/pi);
    cout << d << " degrees \n";
}
