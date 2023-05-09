 # include <iostream>
 using namespace std;
 
void pyr(int x);
int main()
{
int side;
cout<<"Enter side: ";
cin>>side;
pyr(side);
}
void pyr(int x)
{
    for(int i = 1;i <= x; i++)
{
        for(int j = 1; j <= i; j++)
            cout<<"*";
            cout<<endl;
}
}