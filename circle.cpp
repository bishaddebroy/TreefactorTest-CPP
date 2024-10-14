#include <iostream>
using namespace std;

class Circle {
public:
    int radius;  // Attribute

    // Constructor initializing radius with a fixed value
    Circle() {
        radius = 5;
    }

    // Method to calculate the area of the circle
    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle;
    cout << "Area of the circle: " << circle.calculateArea() << endl;
    return 0;
}
