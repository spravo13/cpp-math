#include <iostream>
#include <cmath>
using namespace std;

void circle_area() {

	const double pi = 4.0*atan(1.0);
	float r, a;

	cout << "Radius Length: ";
	cin >> r;

	a = r*r*pi;

	cout << "Area is: " << a << "\n";

}
