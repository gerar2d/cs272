#include <iostream>
using namespace std;

class Cat
{
    public:
        void setItsAge (int age);
        int getItsAge();
        void Meow();
    private:
        int itsAge;
};

void Cat::setItsAge (int age)
{
    itsAge = age;
}

int Cat::getItsAge()
{
    return itsAge;
}

void Cat::Meow()
{
    cout<<"Meow.\n";
}

int main()
{
    Cat Frisky;
    int age;

    cout<< "Please entter Frisky's age: ";
    cin>>age;

    Frisky.setItsAge(age);
    Frisky.Meow();
    cout<<"Frisky is a cat who is "<<Frisky.getItsAge()<<" Years old.\n";
    Frisky.Meow();
    return 0;
}