#include <iostream>
using namespace std;
void clist(char *nameOfCourseIn[], int x);


int main()
{
    char *nameOfCourseIn[] = {"MAT272","Object","Oriented","Programming"};
    int x = 4;
    clist(nameOfCourseIn, x);
    cout<<endl;
}


void clist (char *nameOfCourseIn[], int x)
{
        for (int i = 0; i < x; i++)
        cout<<*(nameOfCourseIn[i]+2)<<endl;
}