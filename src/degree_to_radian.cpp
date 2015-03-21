#include <cmath>
#include <iostream>

using namespace std;

void degree_to_radian() {
	float d, r, rpi;

	cout << "Degrees: ";
	cin >> d;

	r = d*(M_PI/180);
	rpi = d/180;

	cout << r << " or " << rpi << "π radians\n";
}
