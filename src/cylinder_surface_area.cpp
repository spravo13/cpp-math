#include <cmath>
#include <iostream>

using namespace std;

void cylinder_surface_area() {

	float r, h, sa;

	cout << "Radius of cylinder: ";
	cin >> r;
	cout << "Height of cylinder: ";
	cin >> h;

	sa = ((2*M_PI*r) * h) + ((M_PI*pow(r,2)*2));

	cout << "Surface area is: " << sa << "\n";

}

