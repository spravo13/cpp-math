#include <cmath>
#include <iostream>
#include "declare.h"

using namespace std;

void sphere_surface_area() {

	float r, sa;

	cout << "Radius Length: ";
	cin >> r;

	sa = 4 * pi * pow(r,2);

	cout << "Surface area is: " << sa << "\n";

}

