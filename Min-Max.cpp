#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal);

int main() {
    int lo, hi;

    findMinMax(10, 25, 5, lo, hi);

    cout << "Minimum: " << lo << endl;
    cout << "Maximum: " << hi << endl;

    return 0;
}

void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {
    minVal = a;
    maxVal = a;

    if (b < minVal)
        minVal = b;

    if (c < minVal)
        minVal = c;

    if (b > maxVal)
        maxVal = b;

    if (c > maxVal)
        maxVal = c;
}