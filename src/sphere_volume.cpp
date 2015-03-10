#include <cmath>
#include <iostream>

using namespace std;

void sphere_volume() {

	float r, v;

	cout << "Radius Length: ";
	cin >> r;

	v = (4/3) * (M_PI * (pow(r,3)));

	cout << "Volume is: " << v << "\n";

}

