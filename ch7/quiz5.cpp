#include <iostream>
using namespace std;

int factorlt(unsigned int x);

int main()
{
    int num = 5;
    int *p;
    factorlt(num);
    cout<<num;
}

int factorlt(unsigned int x)
{   
    int tf;
    int p[1];
    
    if (x == 1)
        tf = 2;

    for (int i=2;i < x; i++)
    {
        if (x%i == 0)
            tf = 2;
    }

    if (tf == 1)
    {
        p[0] = x/x;
        p[1] = x/1;
    }
    

    return p[1];
}