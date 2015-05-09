#include<iostream>
using namespace std;

class A{
    public:
    int x,y;
    void printx();  //member function declare.
    void printy()   //function definition inside class declaration
    {               //it makes the function inline.
        cout << y;
    }
    inline void none();
};

inline void A::printx()
{
    cout << x;
}

int main()
{
    return 0;
}
