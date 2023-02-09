#include <iostream>
using namespace std;
void minimum(int a[], int size,int& min)
{
    if(size<=0)
        return;
    min = a[0];


    int i;
   
    for (i=1; i < size; i++)
    {
        
        if (a[i] < min)
        {
            min=a[i];
        }
    }
}

int main () 
{
    int a[]={6,3,5,2};
    int min;
    minimum (a, 4, min);
    cout<<min<<endl;;
    return 0;
}