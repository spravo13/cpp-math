#include <iostream>
#include <cmath>
#include "include.h"
int main() {
    using namespace std;
    const double pi = 4.0*atan(1.0);
    string program;
    cout << "Select a program: ";
    cin >> program;
    if(program == "d2r"){
        degree_to_radian();
    }
    else if(program == "r2d"){
        radian_to_degree();
    }
}
