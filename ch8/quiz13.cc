#include <iostream>
using namespace std;
int factorial(unsigned int x);

int main()
{
    int n;
    cout<<"Enter a Positive Integer: ";
    cin>>n;
    if (n > 0)
        cout<<factorial(n)<<endl;
    else
        cout<<"Integer is not a positive!"<<endl;
}

int factorial(unsigned int x)
{
    int fact = 1;
    if (x <= 1)
        return 1;
    else
    {
        for (int counter = x; counter >= 2; counter--)
        {
            fact = fact * counter;
        }
    }
    return fact;
}