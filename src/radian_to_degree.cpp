#include <cmath>
#include <iostream>

using namespace std;

void radian_to_degree() {

	float r, d;

	cout << "Number of radians: ";
	cin >> r;

	d = r*(180/M_PI);

	cout << d << " degrees \n";

}

