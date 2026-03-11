#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    void setDetails(int id, string name, double salary) {
        empID = id;
        empName = name;
        empSalary = salary;
    }

    double calculateGrossSalary() {
        double bonus;

        if (empSalary <= 5000)
            bonus = 0.10;
        else if (empSalary <= 10000)
            bonus = 0.15;
        else
            bonus = 0.20;

        return empSalary + (empSalary * bonus);
    }

    void display() {
        cout << "\nID: " << empID;
        cout << "\nName: " << empName;
        cout << "\nSalary: " << empSalary;
        cout << "\nGross Salary: " << calculateGrossSalary() << endl;
    }
};

int main() {
    Employee e;
    int choice, id;
    string name;
    double salary;

    do {
        cout << "\n1. Add Employee";
        cout << "\n2. Display Details";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Salary: ";
            cin >> salary;
            e.setDetails(id, name, salary);
            break;

        case 2:
            e.display();
            break;

        case 3:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid Choice!";
        }
    } while(choice != 3);

    return 0;
}