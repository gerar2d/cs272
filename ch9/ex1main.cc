#include <iostream>
#include <iostream>
#include "ex1.cc"
using namespace std;

 int main()
 {
    Employee employee1 ("Gerard","Di Mattia", 100000);
    Employee employee2 ("john","wayne", 200000);
    
    cout << "Employee 01 first name: "<<employee1.getf_name()<<" Last name: "<<employee1.getl_name()<< " Salary: "<< employee1.getsalary()<<endl;
    cout << "Employee 01 first name: "<<employee1.getf_name()<<" Last name: "<<employee1.getl_name()<< " Salary + 10%: "<< 1.1*employee1.getsalary()<<endl;
    
    cout << "Employee 02 first name: "<<employee2.getf_name()<<" Last name: "<<employee2.getl_name()<< " Salary: "<< employee2.getsalary()<<endl;
    cout << "Employee 02 first name: "<<employee2.getf_name()<<" Last name: "<<employee2.getl_name()<< " Salary +10%: "<< 1.1*employee2.getsalary()<<endl;
   
 }