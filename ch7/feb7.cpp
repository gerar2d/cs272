#include <iostream>
using namespace std;
int max (const int *, const int);

int main()
{
    const int n= 6;
    int a[n] = {2,6,10,-4,1,-10};
    cout<<"The maximum is:"<<max(a,6)<<endl;
    return 0;
}
int max (const int * aPtr, const int size)
{
    int maximum = *aPtr;
    for (int i = 0; i<size; i++)
    {
        if (maximum <*(aPtr+i))
        maximum = *(aPtr +i);
    }
    return maximum;
}