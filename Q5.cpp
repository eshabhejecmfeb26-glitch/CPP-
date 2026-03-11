#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:

    Student()
    {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
    }

    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(int rollNo, string name, float marks, int x)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void printDetails()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "--------------------" << endl;
    }
};

int main()
{
   
    Student s1;

    
    Student s2(101, "Rahul", 85.5);
    Student s3(102, "Anita", 90.0);

    // Print details
    s1.printDetails();
    s2.printDetails();
    s3.printDetails();

    return 0;
}