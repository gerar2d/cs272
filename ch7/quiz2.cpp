#include <iostream> 
using namespace std;

int main ( )
{
       int myAge;
       int *myAgePtr = NULL;
       myAge = 5;
       myAgePtr = &myAge;
       cout << "myAge: " << myAge << "\n";
       cout << "*myAgePtr: " << *myAgePtr << "\n\n";
       cout << "*myAgePtr = 7\n";

       *myAgePtr = 7;
       cout << "*myAgePtr: " << *myAgePtr << "\n";
       cout << "myAge: " << myAge << "\n\n";
       cout << "myAgePtr = 9\n";
       
       myAge = 9;
       cout << "myAge: " << myAge << "\n";
       cout << "*myAgePtr: " << *myAgePtr << "\n";
       return 0; 
}
