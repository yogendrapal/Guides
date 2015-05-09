#include<iostream>
using namespace std;

class Time{
    public:
    int hh, mm, ss;

    int ShowTime()
    {
        cout << hh <<":" <<mm <<":" <<ss <<endl;
    }

    int MaxHour(Time t1, Time t2)
    {
        if(t1.hh > t2.hh) return t1.hh;
        else t2.hh;
    }

    int MaxHour(Time t2)
    {
        if(this->hh > t2.hh) return this->hh;
        else t2.hh;
    }
};

int main()
{
    Time tx,ty;
    tx.hh = 5;
    ty.hh = 6;
    tx.ShowTime();
    ty.ShowTime();
    cout << tx.MaxHour(ty);
}
