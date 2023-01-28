//calculator with operations done with functons.
#include <iostream>
using namespace std;

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

int main()
{
int operation;
int num1,num2;

cout << "Type 1 for +\n";
cout << "Type 2 for -\n";
cout << "Type 3 for /\n";
cout << "Type 4 for *\n";
cout << "Type anything else to exit.\n";
cin>>operation;
while (operation == 1,2,3,4){
cout<<"Type the two integers\n";
cin>>num1>>num2;

if (operation == 1)
{
int z = addition(num1,num2);
cout<<z<<endl;
}

else if (operation == 2)
{
int z = subtraction(num1,num2);
cout<<z<<endl;
}

else if (operation == 3)
{
int z = multiplication(num1,num2);
cout<<z<<endl;
}

else if (operation == 4)
{
int z = division(num1,num2);
cout<<z<<endl;
}
}
}


int addition(int x, int y)
{
    int z = x + y;
    return z;
}

int subtraction(int x, int y)
{
    int z = x - y;
    return z;
}

int multiplication(int x, int y)
{
    int z = x * y;
    return z;
}

int division(int x, int y)
{
    int z = x / y;
    return z;
}


