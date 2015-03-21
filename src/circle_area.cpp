#include <cmath>
#include <iostream>

using namespace std;

void circle_area() {
	float r, a;

	cout << "Radius Length: ";
	cin >> r;

	a = r*r*M_PI;

	cout << "Area is: " << a << "\n";
}
