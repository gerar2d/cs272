	
/* 
Let a, b, c be three integer numbers. Write a C++ program with functions 



       void rotate1(int * a, int * b, int * c)
       void rotate2(int & a, int & b, int & c)

such that a -> b , b -> c and c -> a. Thus we use two different approaches 
(pointers in rotate1 and references in rotate2).
*/
#include <iostream>
using namespace std;
void rotate1(int * a, int * b, int * c);
void rotate2(int & a, int & b, int & c);

int main(){
int a=10;
int b=20;
int c=30;

rotate1(&a,&b,&c);
cout<<a<<b<<c<<endl;
rotate2(a,b,c);
cout<<a<<b<<c<<endl;



}


void rotate1(int * a, int * b, int * c)
{
    int z;
    z = *a;
    *a = *b;
    *b = *c;
    *c = z;
}

void rotate2(int & a, int & b, int & c)
{
    int z;
    z = a;
    a = b;
    b = c;
    c = z;
}