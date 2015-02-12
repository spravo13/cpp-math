#include <cmath>
#include <iostream>
#include "declare.h"

using namespace std;

void degree_to_radian() {

	float d, r, rpi;

	cout << "Degrees: ";
	cin >> d;

	r = d*(pi/180);
	rpi = d/180;

	cout << r << " or " << rpi << "π radians\n";

}
