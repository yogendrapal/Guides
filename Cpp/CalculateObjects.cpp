#include<iostream>
using namespace std;

class abc{
    public:
 static int counter;
 abc(){counter++;}
 ~abc() {counter--;}
};
int abc::counter;

void func()
{
    abc a;
    cout<<abc::counter << endl;
}

int main()
{
    abc a1;
    cout<< abc::counter << endl;
    abc a2, a3, a4;
    cout<< abc::counter << endl;
    func();
    cout<<abc::counter << endl;
}
