#include<iostream>
using namespace std;

class abc{
private:
    int a,b;
public:
    int c;
    friend int ff();
};

class xyz{
private:
    int a,b;
public:
    int c;
    friend int ff();
};

int ff()
{
    abc x;
    cout<<x.a;
}
int main()
{
abc y;
ff();
return 0;
}
