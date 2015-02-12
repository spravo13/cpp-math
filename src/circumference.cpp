#include <cmath>
#include <iostream>
#include "declare.h"

using namespace std;

void circumference() {

	float d, c;

	cout << "Diameter Length: ";
	cin >> d;

	c = pi * d;

	cout << "circumference: " << c << "\n";

}
