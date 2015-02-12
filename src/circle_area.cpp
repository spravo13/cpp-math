#include <cmath>
#include <iostream>
#include "declare.h"

using namespace std;

void circle_area() {

	float r, a;

	cout << "Radius Length: ";
	cin >> r;

	a = r*r*pi;

	cout << "Area is: " << a << "\n";

}
