#include <iostream>
using namespace std;

class Employee
{
private:
    const int employeeId;
    string name;
    float salary;

public:

    Employee(int id, string n, float s)
    : employeeId(id), name(n), salary(s)
    {

    }

    void display()
    {
        cout << "ID: " << employeeId
             << " Name: " << name
             << " Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1(101,"Ravi",50000);

    e1.display();

    return 0;
}