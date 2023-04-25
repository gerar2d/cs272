#include <iostream>
using namespace std;

int gcd(int a, int b);


int main()
{
    int x, y;
    cout<<"Enter two Integers: ";
    cin>>x>>y;    
    cout<<"GCD of ["<<x<<"] and ["<<y<<"] is: "<<gcd(x, y)<<endl;

    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    
    if (b == 0)
        return a;
    
    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
        return gcd(a, b-a);
}
