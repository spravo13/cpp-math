#include <cmath>
#include <iostream>

using namespace std;

void sphere_surface_area() {

	const double pi = 4.0*atan(1.0);
	float r, sa;

	cout << "Radius Length: ";
	cin >> r;

	sa = 4 * pi * pow(r,2);

	cout << "Surface area is: " << sa << "\n";

}
