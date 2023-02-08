#include <iostream>
using namespace std;

int main()
{
    double y = 5.0;
    double *yPtr = NULL;
    double d;

    yPtr = &y;

    cout<<"y:\t"<<y<<endl;
    cout<<"yPtr:\t"<<yPtr<<endl;
    cout<<"*yPtr:\t"<<*yPtr<<endl;

    d = *yPtr;
    cout<<*yPtr;
    cout<<&yPtr;
    return 0;

}