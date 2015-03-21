#include <cmath>
#include <iostream>

using namespace std;

void sphere_surface_area() {
	float r, sa;

	cout << "Radius Length: ";
	cin >> r;

	sa = 4 * M_PI * pow(r,2);

	cout << "Surface area is: " << sa << "\n";
}
