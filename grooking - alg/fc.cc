#include <iostream>
using namespace std;
int fac(int x);
int main()
{
    int n = 5;
    cout<<fac(n)<<endl;
}

int fac(int x)
{
    if ((x == 0) || (x == 1))
        return 1;

    else
        return x * fac(x -1);
}