#include <cmath>
#include <iostream>

using namespace std;

void sphere_surface_area() {

	const double pi = 4.0*atan(1.0);
	float r, v;

	cout << "Radius Length: ";
	cin >> r;

	v = (4/3) * (pi * (pow(r,3)));

	cout << "Volume is: " << v << "\n";

}
