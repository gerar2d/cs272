#include <iostream>
using namespace std;

bool Test(int a, int b, int c);

int main()
{
    int a,b,c;
    bool z;
    cout<<"enter 3 integers: "<<endl;
    cin>>a>>b>>c;
    z = Test(a,b,c);
    if (z == false)
    cout<<"False"<<endl;
    else
    cout<<"True"<<endl;

}

bool Test(int a,int b,int c)
{   
    bool z;
    if (a+b !=c)
    z=false;
    
    return z;

}