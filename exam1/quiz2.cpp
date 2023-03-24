	
/* 
For each of the following, write a single c++ statement that performs the specified task. 
Assume that floating-point variables number1 and number2 have been declared and that number1 has been initialized to 7.3. 
Assume that variable ptr is a type of char *. 
Assume that arrays s1 and s2 are each 100-element char arrays that are initialized with string literals. 
*/

// a. Declare the variable fPtr to be a pointer to an object of type double.
// double *fPtr;

// b. Assign the address of variable number1 to pointer variable fPtr.
// number1 = *fPtr

// c. Print the value of the object pointed to by fPtr.
// cout<<*fPtr;

// d. Assign the value of the object pointed to by fptr to variable number2.
//number2 = *fPtr;

// e. Print the value of number2.
// cout<<number2;

// f. Print the address of number1.


// g. Print the address stored in fPtr. Is the value printed the same as the address of number2?

#include <iostream>
using namespace std;

int main()
{
    double number1 = 7.3,number2;
    char *ptr;
    double *fPtr;
    char s1[100],s2[100];

    // a.
    *fPtr = number1;

    //b.
    number1 = *fPtr;

    //c.
    cout<<"a: "<<*fPtr<<endl;
    
    //d.
    number2 = *fPtr;

    //e.
    cout<<"e: "<<number2<<endl;

    //f.
    cout<<"f: "<<&number1<<endl;

    //e.
    cout<<"e: "<<&fPtr<<endl;


// Analyze the following program and write down the output of the program. Please print every character!
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

      

}


	


 

 



 

 

