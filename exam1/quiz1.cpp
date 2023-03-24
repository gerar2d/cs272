//Write a function called test that receives three integers and returns true if the sum of the first two (from the left) 
//is equal to the third one. Otherwise, it returns false.
#include <iostream>
using namespace std;
bool test(int x, int y, int z);


int main()
{
    int x,y,z,w;
    cout<<"enter 3 integers: "<<endl;
    cin>>x>>y>>z;
    w = test(x,y,z);
    if (w == 1)
    cout<<"True"<<endl;

    else
    cout<<"False"<<endl;

    return 0;
}

bool test(int x, int y, int z)
{
    int flag;
    if (x+y ==z)
     flag = true;

    else
        flag = false;
    
    return flag;
}