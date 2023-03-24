/*
Write a function that returns the length of a string (char *), excluding the final NULL character. 
It should not use any standard-library functions. 
You may use arithmetic and dereference operators, but not the indexing operator ([]). 
*/
#include <iostream>
using namespace std;
int rlng(char a[]);

int main()
{
    char *a[] = {"hellow"};
    int count;
    count = rlng(a);
    cout<<count<<endl;
}



int rlng(char a[])
{
    int counter;

    for(int i=0; i<10; i++)
        if (a[i] != '\0')
            counter++;
        else
         break;

    return counter;
}

