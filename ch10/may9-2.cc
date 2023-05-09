#include <string> 
#include <iostream>
using namespace std;


class Employee {
public: Employee(const string &, const string &); ~Employee(); string getFirstName() const; string getLastName() const;
static int getCount();
private:
string firstName;
string lastName;
static int count;
};


int Employee::count = 0;
int Employee::getCount() 
{
return count;
}

Employee::Employee(const string &first, const string &last) 
                : firstName(first), lastName(last)
{
        ++count;
        cout<< "Employee constructor for " << firstName << ' ' << lastName << " called."<<endl;
}

Employee::~Employee() 
{
cout<< "~Employee() called for " << firstName << ' ' << lastName << endl;
--count; 
}

string Employee::getFirstName() const 
{
return firstName; 
}

string Employee::getLastName() const
{
return lastName;
}

int main()
{
cout << "Number of employees before instantiation of any object is " << Employee::getCount() << endl;
{
Employee e1 ("Susan", "Baker"); Employee e2 ("Robert", "Jones");
cout << "Number of employees after objects are instantiated is" << Employee::getCount();
cout << "\n\nEmployee 1: " << e1.getFirstName() << ' ' << e1.getLastName()
<< "\nEmployee 2: " << e2.getFirstName() << " " << e2.getLastName() << "\n\n" ;

}
cout << "\nNumber of employees after objects are deleted is " << Employee::getCount() << endl;
}