#include <iostream>
using namespace std;
void lowestFraction(int num1, int num2);


int main()
{
    int num1 = 2;
    int num2 = 4;
    lowestFraction(num1,num2);
   return 0;
}

int findGCD(int a, int b) 
{
   if (b == 0)
      return a;
      return findGCD(b, a % b);
   }
void lowestFraction(int num1, int num2)
{
      int denom;
      denom = findGCD(num1,num2);
      num1/=denom;
      num2/=denom;
      cout<< "Num1 = " << num1<<endl;
      cout<< "Num2 = " << num2<<endl;
      cout<< "Lowest Fraction : "<<num1<<"/"<<num2<<endl;
}