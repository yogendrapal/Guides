#include<iostream>
using namespace std;

class Time{
    public:
    int hh, mm, ss;
    void get();
    void show();
};

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
    Time t1, t2;
    t1.get();
    t1.show();
    t2.get();
    t2.show();
    return 0;
}
