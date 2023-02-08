#include <iostream>
using namespace std;

int main()
{
    int age = 50;
    int *agePtr = &age;
    size_t a = 10;
    size_t *aPtr;

    aPtr = &a;
    
    cout<<"age:\t"<<age<<endl;
    cout<<"agePtr:\t"<<agePtr<<endl;
    cout<<"agePtr:\t"<<*agePtr<<endl;
}