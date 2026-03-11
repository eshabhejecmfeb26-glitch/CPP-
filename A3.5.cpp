#include <iostream>
using namespace std;

class Number{

    int value;

public:

    Number(int v=0){ value=v; }

    friend bool operator>(Number a,Number b);

    Number& operator++(){
        ++value;
        return *this;
    }

    Number operator++(int){
        Number temp=*this;
        value++;
        return temp;
    }

    Number& operator=(Number n){
        value=n.value;
        return *this;
    }

    friend class Inspector;
};

bool operator>(Number a,Number b){
    return a.value>b.value;
}

class Inspector{
public:
    void show(Number n){
        cout<<"Value: "<<n.value<<endl;
    }
};

int main(){

    Number n1(10),n2(20);

    ++n1;
    n2++;

    Inspector i;
    i.show(n1);
    i.show(n2);

    if(n1>n2)
        cout<<"n1 greater";
    else
        cout<<"n2 greater";

}