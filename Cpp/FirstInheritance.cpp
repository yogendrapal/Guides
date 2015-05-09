#include<iostream>
using namespace std;

class A{
    int b;
    public:
    int a;
    void printA()
    {
        cout << a <<"," <<b;
    }
};

class B:private A
{
    public:
    int x,y;
};

int main()
{
    B b1;
    b1.x = 5;
    b1.a = 7;
    b1.b = 8;
    cout<<b1.a;
    b1.printA();
    return 0;
}
