#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

class Employee
{
    public:
        Employee (string fname, string ad, int y);
        
        void setf_name (string fname);
        void setaddr (string ad);
        void setyj (int y);
        

        string getf_name();
        string getad();
        int getyj();

        void display();

    private:
        string f_name;  
        string addr;
        int yj;
};

Employee::Employee (string fname, string ad, int y)
{
    setf_name(fname);
    setaddr(ad);
    setyj(y);
}

 void Employee::setf_name (string fname)
 {
    f_name = fname;
 }

 void Employee::setaddr (string ad)
 {
    addr = ad;
 }

 void Employee::setyj(int y)
 {
    yj = y;
 }

 string Employee::getf_name()
 {
    return f_name;
 }
 string Employee::getad()
 {
    return addr;
 }
int Employee::getyj()
 {
        return yj;
  
 }

void Employee::display()
{
cout<<setw(10)<<setiosflags(ios::left)<<f_name<<setw(20)<<setiosflags(ios::left)<<yj<<setw(20)<<setiosflags(ios::left)<<addr<<endl;
                
}

 int main()
 {
        Employee e1=Employee("Robert","64C- WallsStreat",1994);
        Employee e2=Employee("Sam","68D- WallsStreat",2000);
        Employee e3=Employee("John","26B- WallsStreat",1999);
        cout<<setw(10)<<setiosflags(ios::left)<<"Name"<<"Year of Joining    "<<setw(20)<<setiosflags(ios::left)<<"Address"<<endl;
        e1.display();
        e2.display();
        e3.display();

   
 }