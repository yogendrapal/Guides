#include<iostream>
using namespace std;

class Time{
    public:
    int hh, mm, ss;
    Time();
    ~Time();
    void get();
    void show();
    void setTime();
    void setTime(int, int, int);
    //void setTime(int h, int m, int s);
    void setTime(double, double, double);
    void setTime(int, double);
    //void setTime(double, int);
};

void Time::setTime()
{
    cout << "No argument is passed. \n";
}

void Time::setTime(int h, int m, int s)
{
  hh = h;
  mm = m;
  ss = s;
}

void Time::setTime(double h, double m, double s)
{
    cout << "Arguments data types are different. \n";
}

void Time::setTime(int h, double m)
{
    cout << h <<":"<< m << ":"<< 9.0 <<"\n";
}

/*void Time::setTime(double h, int m)
{
    cout << "Double, Integer \n";
}*/

Time::Time()   //Constructor
{
    hh = mm = ss =0;
    //cout <<"Constructor is called \n";
}

Time::~Time()
{
    //cout << "Object is now destroyed\n";
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
    t1.setTime();
    t1.setTime(4,14,52);
    t1.show();
    t1.setTime(4.0,14.0,52.0);
    t1.setTime(5, 10.1);
    t1.setTime(10.1, 5);
    t1.setTime(3,4);
    return 0;
}
