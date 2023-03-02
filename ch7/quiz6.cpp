#include <iostream>
using namespace std;
int great(int *a,int *b, int*c);
int lesser(int *a,int *b, int*c);

int main()
{
    int a,b,c;
    cout<<"enter 3 integers: "<<endl;
    cin>>a>>b>>c;

    cout<<"greater: "<<great(&a,&b,&c)<<endl;
    
    cout<<"lesser: "<<lesser(&a,&b,&c)<<endl;
}

int great(int *a,int *b, int*c)
{
    int z = *a;
    if (*a > z)
        z = *a;
    
    if (*b > z)
        z = *b;
    
    if (*c > z)
        z = *c;


        return z;


}

int lesser(int *a,int *b, int*c)
{
    int z = *a;
    if (*a < z)
        z = *a;
    
    if (*b < z)
        z = *b;
    
    if (*c < z)
        z = *c;


        return z;


}