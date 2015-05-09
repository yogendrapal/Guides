#include<iostream>
using namespace std;

class Time{
public:
    int hh,mm,ss;
    //Time() {}
    Time(int h=12, int m=12, int s=12)
    { hh = h; mm = m; ss = s;}
};

int main()
{
    Time t1(14,10,11), t2, t3(15,14);
    cout << t1.hh <<":"<<t1.mm<<":"<<t1.ss<<"\n";
    cout << t3.hh <<":"<<t3.mm<<":"<<t3.ss<<"\n";
}
