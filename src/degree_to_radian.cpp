#include <iostream>
#include <cmath>
using namespace std;
void degree_to_radian() {
    const double pi = 4.0*atan(1.0);
    float d, r, rpi;
    cout << "Degrees: ";
    cin >> d;
    r = d*(pi/180);
    rpi = d/180;
    cout << r << " or " << rpi << "π radians\n";
}
