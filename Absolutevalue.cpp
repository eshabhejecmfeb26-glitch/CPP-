#include <iostream>
using namespace std;


int absolute(int n) {
    return (n < 0) ? -n : n;
}

int clamp(int val, int lo, int hi) {
    return (val < lo) ? lo : (val > hi) ? hi : val;
}

int main() {

    cout << "val\tlo\thi\tabsolute(val)\tclamp(val, lo, hi)\n";
    cout << "----------------------------------------------------------\n";

    
    cout << "-15\t-10\t10\t"
         << absolute(-15) << "\t\t"
         << clamp(-15, -10, 10) << endl;

    
    cout << "0\t-10\t10\t"
         << absolute(0) << "\t\t"
         << clamp(0, -10, 10) << endl;

   
    cout << "25\t-10\t10\t"
         << absolute(25) << "\t\t"
         << clamp(25, -10, 10) << endl;

    cout << "-3\t0\t5\t"
         << absolute(-3) << "\t\t"
         << clamp(-3, 0, 5) << endl;

    return 0;
}