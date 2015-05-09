#include<iostream>
using namespace std;

class A{
    public:
    int i; //data member or member variable
    void function1() //member function
    {
        cout <<"This is function1\n";
    }
    void function2();
};

void A::function2()
{
    cout <<"This is function2\n";
}

int main()
{
    A a;      //object creation
    A a1, a2; //multiple object creation
    a.i = 0;  //accessing class members using dot (.) operator
    a1.i = 10;
    a2.i = 20;
    a.function1();
    a.function2();
    cout << a.i <<","<< a1.i <<","<< a2.i;
    return 0;
}
