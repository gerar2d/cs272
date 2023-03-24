#include <iostream>
using namespace std;

inline int square(int x)
{
    int z;
    z = x*x;
    return z;
}

int main()
{
    for (int i=1; i <=5;i++)
    cout<<square(i)<<endl;

    return 0;
}