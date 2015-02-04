#include <iostream>
#include <cmath>
void triangle_area() {
    using namespace std;
    float b, h ,a;
    cout << "Base length: ";
    cin >> b;
	cout << "Height measurment: ";
	cin >> h;
    a = (b * h)/2;
    cout << "Area is: " << a << "\n";
}
