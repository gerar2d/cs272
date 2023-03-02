#include <iostream>
using namespace std;

int factorlt(unsigned int x);

int main()
{

    int num2 = 6;
    int k;
    k = factorlt(num2);

    if (k == 1)
        cout<<"It is not a prime"<<endl;
    else
    cout<<k<<endl;
}

int factorlt(unsigned int x)
{   
    int tf;
    int p =1;
    
    if (x < 2)
        tf = 2;

    for (int i = 2;i < x; i++)
    {
        if (x % i == 0)
            tf = 2;
    }
    
    if (tf != 2)
    {
        for (int g = 2; g <= x; g++)
        p *= g;
    }

    return p;
}