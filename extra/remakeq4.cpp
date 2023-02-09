#include <iostream>
using namespace std;
int minimum (int a[],int size, int &b);

int main()
{
    int a[] = {2,3,4,8,7};
    int min;
    
    min = minimum(a,5, min);
    cout<<min<<endl;

}

int minimum (int a[],int size, int &b)
{
    int min = a[0];

    for (int i=0; i <size;i++)
    if (min > a[i])
        min = a[i];

        return min;
}