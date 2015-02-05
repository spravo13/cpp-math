#include <iostream>
#include <cmath>
using namespace std;

void cylinder_surface_area() {

	const double pi = 4.0*atan(1.0);
	float r, h, sa;

	cout << "Radius of cylinder: ";
	cin >> r;
	cout << "Height of cylinder: ";
	cin >> h;

	sa = ((2*pi*r) * h) + ((pi*pow(r,2)*2));

	cout << "Surface area is: " << sa << "\n";

}
