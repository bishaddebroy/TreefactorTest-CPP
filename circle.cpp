#include <iostream>
using namespace std;

class Circle {
public:
    int radius;  // Attribute now initialized with a parameter

    // Constructor with a parameter to set the radius (Parameterized Attributes)
    Circle(int r) {
        radius = r;
    }

    // Method to calculate the area of the circle
    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle(5);  // Radius passed as an argument
    cout << "Area of the circle: " << circle.calculateArea() << endl;
    return 0;
}
