#include <iostream>
using namespace std;

void rotate1(int * a, int * b, int * c);
void rotate2(int & a, int & b, int & c);

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    rotate1(&a,&b,&c);
    cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
    
    a = 10;
    b = 20;
    c = 30;
    rotate2(a,b,c);
    cout<<"*a:"<<a<<"*b:"<<b<<"*c:"<<c<<endl;
}

void rotate1(int * a, int * b, int * c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;    
}

void rotate2(int & a, int & b, int & c)
{
    int temp= a;
    a = b;
    b = c;
    c = temp;
}