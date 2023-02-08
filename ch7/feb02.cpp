#include <iostream>
using namespace std;

void cubeByReference(int*);
void cubeByRef(int&);

int main()
{
    int number = 5;
    int num = 5;
    cout<<"number:"<<number<<endl;
    cout<<"num:"<<num<<endl;
    
    cubeByReference(&number);
    cout<<"ref by pointer:"<<number<<endl;
    
    cubeByRef(num);
    cout<<"ref by ref:"<<num<<endl;
    
    return 0;
}

void cubeByReference(int *n)
{
    *n = *n * *n * *n;
}
void cubeByRef(int &n)
{
    n = n * n * n;
}