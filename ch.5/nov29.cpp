#include <iostream>
using namespace std;

double square (double);

int main()
{
    double i;
    i = 0.4;
    cout<<square (i)<<endl;
}

double square (double x)
{
    double z;
    z = x*x;
    return z;
}