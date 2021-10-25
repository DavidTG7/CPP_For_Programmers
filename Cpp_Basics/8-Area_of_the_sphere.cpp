#include <iostream>
using namespace std;

/* Formula to calculate the area of a sphere given the radius. */

int main(){
    double area;
    const double pi = 3.14;
    double r = 10.9;

    area = 4 * pi * r * r;
    cout << "Area of the sphere with radius " << r << " is = " << area << endl;
}