#include <iostream>
using namespace std;

int main() 
{
    float s1, s2, s3, s4, s5;
    float total, percentage;
    string grade;

    cout << "Enter marks of 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5;

    grade = (percentage >= 75) ? "A" :
            (percentage >= 60) ? "B" :
            (percentage >= 45) ? "C" :
            "Fail";

    cout << "\nSubject 1: " << s1;
    cout << "\nSubject 2: " << s2;
    cout << "\nSubject 3: " << s3;
    cout << "\nSubject 4: " << s4;
    cout << "\nSubject 5: " << s5;

    cout << "\nTotal: " << total;
    cout << "\nPercentage: " << percentage;
    cout << "\nGrade: " << grade;

    return 0;
}
