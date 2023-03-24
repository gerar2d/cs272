/*
Write a function countEven (int*, int) which receives an integer array and its size, 
and returns the number of even numbers in the array.
*/
#include <iostream>
using namespace std;
int countEven(int a[],int b);


int main ()
{
    int a[] = {2,3,5,8,6};
    int size = 5;
    int e;

    e = countEven(a,size);
    cout<<e<<endl;
}

int countEven(int a[], int b)
{
    int count;

    for (int i=0; i < b; i++)
        if ((a[i])%2 == 0)
            count++;
    
    return count;
}