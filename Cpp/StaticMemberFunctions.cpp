#include<iostream>
using namespace std;

class abc{
private:
    static int s;
public:
    int a;
    static void func(int i)
    {
        s = i;
        cout<<s;
    }
};
int abc::s;

int main()
{
   abc::func(5);
   abc a;
   a.func(7);
}
