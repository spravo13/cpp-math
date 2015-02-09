#include <cmath>
#include <iostream>

using namespace std;

void cylinder_volume() {

	const double pi = 4.0*atan(1.0);
	float h, r, v;

	cout << "Height of cylinder: ";
	cin >> h;
	cout << "Radius of cylinder: ";
	cin >> r;

	v = pi * r * r * h;

	cout << "Volume is: " << v << "\n";

}
