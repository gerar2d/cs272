/*
Write a function FactorIt that writes out 
the prime factorization of a postive integer parameter
*/
#include <iostream>
using namespace std;
unsigned int factorIt(unsigned int x);

int main()
{
    int x = 6;
    int total;

    cout<<factorIt(x)<<endl;
}


unsigned int factorIt(unsigned int x)
{
    if (x == 0 || x == 1)
        return 1;
    return x * factorIt(x - 1);  //recursion
}