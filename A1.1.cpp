#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

public:
    // Setter functions
    void setName(string n) { name = n; }
    void setRollNumber(int r) { rollNumber = r; }
    void setMarks(float m) { marks = m; }

    // Getter functions
    string getName() { return name; }
    int getRollNumber() { return rollNumber; }
    float getMarks() { return marks; }
    char getGrade() { return grade; }

    void calculateGrade() {
        if (marks >= 90) grade = 'A';
        else if (marks >= 80) grade = 'B';
        else if (marks >= 70) grade = 'C';
        else if (marks >= 60) grade = 'D';
        else grade = 'F';
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollNumber;
        cout << "\nMarks: " << marks;
        cout << "\nGrade: " << grade << endl;
    }
};

int main() {
    Student s;
    int choice;
    string name;
    int roll;
    float marks;

    do {
        cout << "\n1. Accept Information";
        cout << "\n2. Display Information";
        cout << "\n3. Calculate Grade";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Roll Number: ";
            cin >> roll;
            cout << "Enter Marks: ";
            cin >> marks;
            s.setName(name);
            s.setRollNumber(roll);
            s.setMarks(marks);
            break;

        case 2:
            s.display();
            break;

        case 3:
            s.calculateGrade();
            cout << "Grade Calculated Successfully!\n";
            break;

        case 4:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid Choice!";
        }
    } while(choice != 4);

    return 0;
}