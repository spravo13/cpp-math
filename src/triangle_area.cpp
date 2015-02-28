#include <cmath>
#include <iostream>

using namespace std;

void triangle_area() {

	float b, h ,a;

	cout << "Base length: ";
	cin >> b;
	cout << "Height measurment: ";
	cin >> h;

	a = (b * h)/2;

	cout << "Area is: " << a << "\n";

}

