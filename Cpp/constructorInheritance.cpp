#include<iostream>
using namespace std;

class parent{
    public:
parent() { cout << "parent constructor is called."<<endl;}
~parent() { cout << "parent destructor is called."<<endl;}
};

class parent1{
    public:
parent1() { cout << "parent1 constructor is called."<<endl;}
~parent1() { cout << "parent1 destructor is called."<<endl;}
};

class child:public parent, public parent1{
public:
child() { cout << " child constructor is called."<<endl;}
~child() { cout << "child destructor is called."<<endl;}
};

int main()
{
    child ch1;
    return 0;
}
