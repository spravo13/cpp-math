#include <iostream>
#include <cmath>
void degree_to_radian();
void radian_to_degree();
int main() {
    using namespace std;
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
