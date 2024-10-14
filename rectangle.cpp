#include <iostream>
using namespace std;

class Rectangle {
public:
    // Fixed width and height within the method
    int calculateArea() {
        int width = 5;   // Local variable
        int height = 10; // Local variable
        return width * height;
    }
};

int main() {
    Rectangle rect;
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;
    return 0;
}
