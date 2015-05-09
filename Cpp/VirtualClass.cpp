#include<iostream>
using namespace std;

class parent{
public:
    int p;
};

class child1:virtual public parent
{
public:
    int c1;
};

class child2:virtual public parent
{
public:
    int c2;
};

class child3: public child1, public child2
{
public:
    int c3;
};

int main()
{
    child3 ch3;
    ch3.p = 5;
    return 0;
}
