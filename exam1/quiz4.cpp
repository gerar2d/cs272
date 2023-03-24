/*
Write a function called Minimum that receives an int type array 
and its size and returns the smallest value stored in that array.
*/
#include <iostream>
using namespace std;
int Minimum (int a[], int b);

int main()
{
    int a[]= {2,3,4,5,6,1};
    int size = 6;
    int min;

    min = Minimum(a,size);

    cout<<min<<endl;
}


int Minimum (int a[], int b)
{
    int min = a[1];
    for (int i = 0; i < b; i++)
        if (a[i] < min)
            min = a[i];

    return min;

}