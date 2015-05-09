#include<iostream>
using namespace std;

class Time{
public:
    int hh,mm,ss;
    Time(){ cout << "zero argument constructor\n";}
    Time(int h){ cout << "one argument constructor\n"; }
    Time(int h, int m, int s) { cout << "three argument constructor\n";}
};

int main()
{
    Time t1, t2(12), t3(12,10,10);
}
