#include <iostream>
using namespace std;
bool isPrime(int num);

int main(){
   int num;
   bool flag;
   cout<<"Enter any number(should be positive integer): ";
   cin>>num;
   flag = isPrime(num);
   if (flag==true)
      cout<<num<<" is a prime number";
   else
      cout<<num<<" is not a prime number";
   return 0;
}
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) 
    {
       if(num % i == 0) 
       {
          flag = false;
          break;
       }
    }
    return flag;
}
