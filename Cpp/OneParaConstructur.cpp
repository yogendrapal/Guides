#include<iostream>
using namespace std;

class Time{
public:
    int hh,mm,ss;
    Time() {hh = 0; mm = 0; ss = 0;}
    Time(int h) {hh = h;}
};

int main()
{
    Time t(14);
    Time t0 = Time(15);
    Time t1 = 12;
    cout << t1.hh <<":"<<t1.mm<<":"<<t1.ss<<"\n";
}

