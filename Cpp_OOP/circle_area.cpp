#include <iostream>
#define PI 3.1416
using namespace std;

class Circle {
	private:
		int radius = 1;
	
	public:
		void setRadius(int r){
			if ( r >= 0){
				radius = r;
			}
		}
	
		int getRadius(){
			return radius;
		}
	
	double getArea(){
		return PI * radius * radius;
	}
};

int main (){
	Circle c;
	int rad;
	cout << "Write the radius:" << endl;
	cin >> rad;
	c.setRadius(rad);
	cout << "The area of a circle of radius " << c.getRadius() << " is " << c.getArea() << endl;
	return 0;	
}
