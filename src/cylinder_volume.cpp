#include <cmath>
#include <iostream>
#include "declare.h"

using namespace std;

void cylinder_volume() {

	float h, r, v;

	cout << "Height of cylinder: ";
	cin >> h;
	cout << "Radius of cylinder: ";
	cin >> r;

	v = pi * r * r * h;

	cout << "Volume is: " << v << "\n";

}

