#include <cmath>
#include <iostream>
#include "declare.h"

using namespace std;

void sphere_volume() {

	float r, v;

	cout << "Radius Length: ";
	cin >> r;

	v = (4/3) * (pi * (pow(r,3)));

	cout << "Volume is: " << v << "\n";

}
