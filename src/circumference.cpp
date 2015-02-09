#include <cmath>
#include <iostream>

using namespace std;

void circumference() {

	const double pi = 4.0*atan(1.0);
	float d, c;

	cout << "Diameter Length: ";
	cin >> d;

	c = pi * d;

	cout << "circumference: " << c << "\n";

}
