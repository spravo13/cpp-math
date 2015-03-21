#include <cmath>
#include <iostream>

using namespace std;

void cylinder_volume() {
	float h, r, v;

	cout << "Height of cylinder: ";
	cin >> h;
	cout << "Radius of cylinder: ";
	cin >> r;

	v = M_PI * r * r * h;

	cout << "Volume is: " << v << "\n";
}
