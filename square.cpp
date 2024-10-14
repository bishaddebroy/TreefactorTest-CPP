#include <iostream>
using namespace std;

class Square {
public:
    // Renamed parameter for better clarity: s -> sideLength (Renamed Variables)
    int calculatePerimeter(int sideLength) {
        return 4 * sideLength;
    }
};

int main() {
    Square square;
    cout << "Perimeter of the square: " << square.calculatePerimeter(6) << endl; // sideLength as parameter
    return 0;
}
