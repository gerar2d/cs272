#include <iostream>
using namespace std;

int main()
{
    char nameOfCourseIn[35];
    char nameOfCourse[] = "MAT272 Object Oriented Programming";

    for (int i = 0; nameOfCourse[i] != '\0'; i++)
        cout<<nameOfCourse[i];

    cout<<endl<<nameOfCourse<<endl;
    cout<<"Please enter the course name: \n";
    cin.getline(nameOfCourseIn,35,'\n');
    cout<<"Course Name: "<<nameOfCourseIn<<endl;
    

    return 0;
}
