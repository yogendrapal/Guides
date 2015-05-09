#include<iostream>
using namespace std;

class A{
    int a;
protected:
    int b;
public:
    int c;

    void print()
    {
        cout << a;
    }
};

class B:protected A
{
    public:
  void printB()
  {
      cout<<b;
  }
};

int main()
{
    B b1;
    b1.printB();
    //b1.b;
    return 0;
}
