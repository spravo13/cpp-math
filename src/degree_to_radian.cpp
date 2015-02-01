#include <iostream>
#include <cmath>
void degree_to_radian() {
    const double pi = 4.0*atan(1.0);
    using namespace std;
    float d, r, rpi;
    cout << "Enter degrees: ";
    cin >> d;
    r = d*(pi/180);
    rpi = d/180;
    cout << r << " or " << rpi << "π radians\n";
}
