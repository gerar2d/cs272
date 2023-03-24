/*	
Write a program to find out the greatest and the 
smallest among three input integer numbers using pointers.
*/

#include <iostream>
using namespace std;
int min(int *a, int *b, int *c);
int max (int *a, int *b, int *c);
int main()
{
    int a=20;
    int b=40;
    int c=50;
    int m;
    int ma;
    m = min(&a,&b,&c);
    ma = max(&a,&b,&c);
    cout<<m<<endl;
    cout<<ma<<endl;

}

int min(int *a, int *b, int *c)
{
    int m = *a;
    if (m > *a)
        m = *a;
    if (m > *b)
        m = *b;
    if (m > *c)
        m = *c;

    return m;

}

int max (int *a, int *b, int *c)
{
    int m = 0;
    if (m < *a)
        m = *a;
    if (m < *b)
        m = *b;
    if (m < *c)
        m = *c;

    return m;

}