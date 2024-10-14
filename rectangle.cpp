#include <iostream>
using namespace std;

class Rectangle {
public:
    // Parameterize width and height for more flexibility (Parameterized Variables)
    int calculateArea(int width, int height) {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    cout << "Area of the rectangle: " << rect.calculateArea(5, 10) << endl; // Parameters passed
    return 0;
}
