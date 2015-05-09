#include<iostream>
using namespace std;

class Time {
    public:
    int hh;
    int mm;
    int ss;

    Time()
    {
        hh = 0;
        mm = 0;
        ss = 0;
    }

    Time(int h)
    {
        hh = h;
    }

    Time(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }
};

int main()
{
    Time t1 = Time(11, 11, 11); //Explicit call
    Time t2(12); //implicit call
    Time t3(02,12,20);
    cout << t1.hh << " " << t1.mm << " " << t1.ss << "\n";
    cout << t2.hh << " " << t2.mm << " " << t2.ss << "\n";
    cout << t3.hh << " " << t3.mm << " " << t3.ss << "\n";
}
