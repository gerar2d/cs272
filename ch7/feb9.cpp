#include <iostream>
using namespace std;

int main ()
{
    int a=2,b=4;
    int *const ptr= &a;
    *ptr = 9;

    cout<<"x:" <<a<<"y:"<<b<<endl;

    //part2.
    double y=5.0;
    int x=2, size1, size2;

    size1 = sizeof(y);
    size2 = sizeof(x);

    cout<<"size of variable y: "<<size1<<" bytes\n";
    cout<<"size of variable x: "<<size2<<" bytes\n";

}