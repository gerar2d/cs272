#include <iostream>
using namespace std;

int main ()
{
    char x[] = "Happy";
    char y[25];
    char z[15];

    strcpy (y,x);

    cout << "The string in array x is: " << x
    << "\nThe string in array y is: " <<y<<'\n';

    strncpy (z,x,14);
    z[14] = '\0';

    cout << "The string in array z is: " << z << endl;

    return 0;
}