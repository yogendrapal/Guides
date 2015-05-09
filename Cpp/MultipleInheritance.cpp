#include<iostream>
using namespace std;

class parent{
 public:
     int a,b;
};

class parent1{
public:
    int c,d;
};

class child:public parent, private parent1{
public:
    int i,j;
};

int main()
{
    child c1;
    c1.c = 5;
    return 0;
}
