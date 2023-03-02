#include <iostream>
using namespace std;

int main()
{
    int b[] = {10,20,30,40,50};
    int *bPtr = b;
    int &bR = *bPtr;

    for (int i = 0; i < 5; i++)
        cout << "b["<<i<<"]:"<<b[i]<<endl;
    
    for (int i = 0; i < 5; i++)
        cout << "bPtr["<<i<<"]:"<<bPtr[i]<<endl;
    
    for (int i = 0; i < 5; i++)
        cout << "*(b+"<<i<<"):"<<*(b+i)<<endl;

    for (int i = 0; i < 5; i++)
        cout << "Br["<<i<<"]:"<<&bR+i<<endl;
}