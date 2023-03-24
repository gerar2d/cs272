#include <iostream>
using namespace std;

int max(int a, int b, int c);
int min(int a, int b, int c);

int main()
{
    int a,b,c,x,y;
    cout<<"Enter 3 integers: ";
    cin>>a>>b>>c;
    x = max(a,b,c);
    y = min(a,b,c);
    cout<<"The maximum number is: "<<x<<endl;
    cout<<"The minimum number is: "<<y<<endl;
    return 0;
}


int max(int a, int b, int c)
{
    int z = a;
    if (z < b )
        z = b;
    if (z < c)
        z = c;
    
    return z;
}

int min(int a, int b, int c)
{
    int z = a;
    if (z > b )
        z = b;
    if (z > c)
        z = c;
    
    return z;
}