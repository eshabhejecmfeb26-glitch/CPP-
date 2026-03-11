#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    int *ptr = &num;   // pointer
    int &ref = num;    // reference

    cout << "Initial value: " << num << endl;

    *ptr = 20;
    cout << "After pointer modification: " << num << endl;

    ref = 30;
    cout << "After reference modification: " << num << endl;

    return 0;
}