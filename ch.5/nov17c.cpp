#include <iostream>

using namespace std;


int max(int x, int y){
    int z;
    z = (x>y) ? x : y;
    return z;
}

int main(){
    int a,b,m;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    m = max(a,b);

    cout<<"max = "<<m<<endl;
return 0;
}