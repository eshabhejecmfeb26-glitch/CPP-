#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    mutable int accessCount;

public:
    Employee(int i, string n) {
        id = i;
        name = n;
        accessCount = 0;
    }

    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        accessCount = e.accessCount;
        cout << "User defined copy constructor called\n";
    }

    void display() const {
        accessCount++;
        cout << "ID: " << id << " Name: " << name 
             << " Access Count: " << accessCount << endl;
    }
};

int main() {

    Employee e1(1,"Rahul");

    e1.display();
    e1.display();
    e1.display();

    Employee e2 = e1;   

    e2.display();

}