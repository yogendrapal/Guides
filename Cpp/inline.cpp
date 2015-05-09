#include<iostream>
using namespace std;

inline int sum3(int, int, int);
int sum2(int, int);

inline int sum2(int x, int y)
{
    return x+y;
}

int sum3(int x, int y, int z)
{
    return x+y+z;
}

int main()
{
    cout << sum2(3,4) << "\n";
    cout << sum3(1,2,3) << "\n";
    return 0;
}
