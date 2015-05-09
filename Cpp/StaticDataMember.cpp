#include<iostream>
using namespace std;

class abc{
    public:
static int s;
int a;
};
int abc::s;

int main()
{
    cout << abc::s;
    abc a1,a2;
    cout<<a1.s << endl << a1.a;
    a2.s = 5;
    a2.a = 5;
    cout<<a1.s << endl << a1.a<< endl <<a2.a;
}
