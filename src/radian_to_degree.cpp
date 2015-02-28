#include <cmath>
#include <iostream>
#include "declare.h"

using namespace std;

void radian_to_degree() {

	float r, d;

	cout << "Number of radians: ";
	cin >> r;

	d = r*(180/pi);

	cout << d << " degrees \n";

}

