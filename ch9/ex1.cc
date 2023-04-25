#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
        Employee (string fname, string lname, int slr);
        
        void setf_name (string fname);
        void setl_name (string lname);
        void setsalary (int slr);
        

        string getf_name();
        string getl_name();
        int getsalary();

    private:
        string f_name;  
        string l_name;
        int salary;
};

Employee::Employee (string fname, string lname, int slr)
{
    setf_name(fname);
    setl_name(lname);
    setsalary(slr);
}

 void Employee::setf_name (string fname)
 {
    f_name = fname;
 }

 void Employee::setl_name (string lname)
 {
    l_name = lname;
 }

 void Employee::setsalary (int slr)
 {
    salary = slr;
 }

 string Employee::getf_name()
 {
    return f_name;
 }
 string Employee::getl_name()
 {
    return l_name;
 }
 int Employee::getsalary()
 {
    if (salary > 0)
        return salary;
    else
        return 0;
 }
