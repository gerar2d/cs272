/*	
Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, 
month and year to store the dates. 
If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/
#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
}; 

int main()
{
    Date today = {10, 20, 30};
    Date today2 = {10, 20, 30};

    if ((today.day == today2.day) && (today.month == today2.month) && (today.year == today2.year))
        cout<<"Dates are equal"<<endl;
    else
        cout<<"Dates not equal"<<endl;

    return 0;
}
