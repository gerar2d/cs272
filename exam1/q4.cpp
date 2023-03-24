#include <iostream>
using namespace std;

double min(double *arr);


int main() {
    double list[10];
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<" : ";
        cin>>list[i];
    }
    cout<<"The smallest number is: "<<min(list)<<endl;;
}

double min(double *list)
{
    double m = list[1];
    for(int i=0;i<10;i++)
    {
        if(m > list[i])
            m = list[i];
    }
    
    return m;
    
}
