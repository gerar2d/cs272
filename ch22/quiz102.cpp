#include <iostream>
using namespace std;

struct Date
{
  int day;
  int month;
  int year;
} date1,date2;  

int main()
{
  cin>>date1.day,date1.month,date1.year;
  

  cin>>date2.day,date2.month,date2.year;
  
  
  
  
  if((date1.day==date2.day) && (date1.month==date2.month) && (date1.year==date2.year))
  {
     cout<<"Dates are equal\n";
  }      
  else
  {
      cout<<"Dates are not equal\n";
  }
  return 0;
}