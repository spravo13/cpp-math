#include <iostream>
#include <cmath>
void trapezoid_area() {
    using namespace std;
    float h, b1, b2, a;
    cout << "Height measurment: ";
    cin >> h;
	cout << "Length of first base: ";
	cin >> b1;
	cout << "Length of second base: ";
	cin >> b2;
    a = ((b1 + b2) / 2) * h;
    cout << "Area is: " << a << "\n";
}
