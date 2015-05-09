#include<iostream>
using namespace std;

class Time{
    public:
    int hh, mm, ss;
    void get();
    void show();
    void init();
};

void Time::init()
{
    hh = mm = ss =0;
}

void Time::get()
{
    cout << "input hours";
    cin >> hh;
    cout << "input minutes";
    cin >> mm;
    cout << "input seconds";
    cin >> ss;
}

void Time::show()
{
    cout << hh <<":"<< mm <<":" <<ss<<"\n";
}

int main()
{
    Time t1;
    t1.init();
    t1.show();
    return 0;
}
