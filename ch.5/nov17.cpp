#include <iostream>

using namespace std;


int squared(int y){
    int z;
    z = y*y;
    return z;
}

int main(){
    for (int i =1; i <= 5; i++)
    cout<<squared(i)<<" ";
    
cout<<endl;
return 0;
}