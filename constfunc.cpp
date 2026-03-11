#include <iostream>
#include <iomanip>
using namespace std;

const float PI = 3.14159f;

float circleArea(float radius) {
    return PI * radius * radius;
}

float circlePerimeter(float radius) {
    return 2 * PI * radius;
}

int main() {

    float radius = 7.0;

    cout << fixed << setprecision(4);

    cout << "Area: " << circleArea(radius) << endl;
    cout << "Perimeter: " << circlePerimeter(radius) << endl;

    // PI = 3.0f;  // Error: assignment of read-only variable 'PI'

    return 0;
}