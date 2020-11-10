#include "../header/rectangle.hpp"
#include <iostream> 
#include <string>

using namespace std;

int main() {
	Rectangle rect1 = Rectangle(4, 4);
	cout << "area: " << rect1.area() << endl;
	cout << "perimeter: " << rec1.perimeter() << endl;
	return 0;
}
