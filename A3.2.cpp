#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    string name;
    int marks;

public:

    Student(int r=0,string n=" ",int m=0){
        roll=r;
        name=n;
        marks=m;
    }

    ~Student(){
        cout<<"Destroying student "<<name<<endl;
    }

    void input(){
        cin>>roll>>name>>marks;
    }

    void display(){
        cout<<roll<<" "<<name<<" "<<marks<<endl;
    }

    void writeFile(ofstream &f){
        f<<roll<<" "<<name<<" "<<marks<<endl;
    }
};

int main(){

    Student s[3];

    for(int i=0;i<3;i++)
        s[i].input();

    ofstream fout("students.txt");

    for(int i=0;i<3;i++)
        s[i].writeFile(fout);

    fout.close();

    ifstream fin("students.txt");
    string line;

    while(getline(fin,line))
        cout<<line<<endl;

}