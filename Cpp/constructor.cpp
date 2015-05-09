#include<iostream>
using namespace std;

class Time{
    public:
    int hh, mm, ss;
    Time();
    ~Time();
    void get();
    void show();
};

Time::Time()   //Constructor
{
    hh = mm = ss =0;
    cout <<"Constructor is called \n";
}

Time::~Time()
{
    cout << "Object is now destroyed\n";
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
    Time t1, t2, t3;
    return 0;
}
