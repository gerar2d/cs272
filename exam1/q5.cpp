#include <iostream>
using namespace std;
int gcd(int r,int s);


int main()
{
int p,q;

cout<<("Enter first number : ");
cin>>p;
cout<<("Enter second number : ");
cin>>q;
cout<<"gcd of "<<p<<" and "<<q<<" is "<<gcd(p,q)<<endl;
}


int gcd(int r,int s)
{

    if(r==0) 
        return s;
    if(s==0)
        return r;

    if(r==s)
        return r;
    if(r>s)
        return gcd(r-s,s);
    if(r<s)
        return gcd(r,s-r);
}

