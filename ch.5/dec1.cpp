#include <iostream>
using namespace std;

void Swap(int &k, int &u);

int main()
{
   int x = 4, y = 7;

   Swap(x,y);

   cout <<"x: "<<x<<"\ty: "<<y<<endl;
   return 0; 
}

void Swap(int &k,int &u)
{
    int t;
    t = k;
    k = u;
    u = t;
}

// & is a reference to the variable held in the function using the fuction with the reference.


// In computer science, a stack is an abstract data type and data structure based on the principle of Last In First Out (LIFO).
// & reference syntax.