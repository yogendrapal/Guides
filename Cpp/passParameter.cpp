#include<iostream>
using namespace std;

class parent{
    int p;
    public:
parent() { }
parent(int x)
{
 p = x;
 cout<<p<<endl;
}
~parent() { }
};

class parent1{
    int p1;
    public:
parent1() { }
parent1(int x)
{
    p1 = x;
    cout<<p1<<endl;
}
~parent1() { }
};

class child:public parent, public parent1{
    int c;
public:
child() { }
child(int y)
{
    c = y;
}
child(int x, int y):parent(y)
{
    //p = x;
    c = y;
    cout<<c<<endl;
}
child(int x, int y, int z):parent(z), parent1(x)
{
    //p = x;
    c = y;
    cout<<c<<endl;
}
~child() { }
};

int main()
{
    child ch1(3,5,7);
    return 0;
}
