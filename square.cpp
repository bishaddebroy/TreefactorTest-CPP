#include <iostream>
using namespace std;

class Square {
public:
    // Method with basic parameter names: s for side length
    int calculatePerimeter(int s) {
        return 4 * s;
    }
};

int main() {
    Square square;
    cout << "Perimeter of the square: " << square.calculatePerimeter(6) << endl; // 's' as parameter
    return 0;
}
