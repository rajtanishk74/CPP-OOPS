#include <iostream>
using namespace std;

class Mensuration {

public:
    float a, b;

    float Area(float a, float b) {
        return a * b;
    }

    float Area(float constant, float a, float b) {
        return constant * a * b;
    }

    float Area(float constant, float p1, float p2, float h) {
        return constant * (p1 + p2) * h;
    }

    float perimeter(float length, float breadth) {
        return 2 * (length + breadth);
    }

    float perimeter(float sideOne, float sideTwo, float sideThree) {
        return sideOne + sideTwo + sideThree;
    }

    float perimeter(float sideOne, float sideTwo, float sideThree, float sideFour) {
        return sideOne + sideTwo + sideThree + sideFour;
    }

};

int main() {

    Mensuration Triangle, Rectangle, Trapezium;

    float length = 5.0, breadth = 3.0;
    cout << "Area of Rectangle: " << Rectangle.Area(length, breadth) << endl;
    cout << "Perimeter of Rectangle: " << Rectangle.perimeter(length, breadth) << endl;

    float base = 4.0, height = 6.0;
    float constantTriangle = 0.5;
    cout << "Area of Triangle: " << Triangle.Area(constantTriangle, base, height) << endl;

    float side1 = 3.0, side2 = 5.0, side3 = 4.0;
    cout << "Perimeter of Triangle: " << Triangle.perimeter(side1, side2, side3) << endl;

    float side1Trapezium = 3.0, side2Trapezium = 5.0, side3Trapezium = 4.0, side4Trapezium = 6.0;
    float heightTrapezium = 4.0;
    float constantTrapezium = 0.5;
    cout << "Area of Trapezium: " << Trapezium.Area(constantTrapezium, side1Trapezium, side2Trapezium, heightTrapezium) << endl;
    cout << "Perimeter of Trapezium: " << Trapezium.perimeter(side1Trapezium, side2Trapezium, side3Trapezium, side4Trapezium) << endl;

    return 0;
}