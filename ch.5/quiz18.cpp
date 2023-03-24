#include <iostream>
using namespace std;

bool Test(int a, int b, int c);

int main()
{
    int a,b,c;
    int z;
    cout<<"Enter 3 integers: ";
    cin>>a>>b>>c;
    z = Test(a,b,c);
    if (z == true)
        cout<<"True\n";
    else
        cout<<"false\n";

}

bool Test(int a, int b, int c)
{
    bool z = true;
    if (a + b != c)
        z = false;
    
    return z;
}