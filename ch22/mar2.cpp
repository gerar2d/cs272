#include <iostream>
using namespace std;
int clist(char *nameOfCourseIn[], int x);


int main()
{
    char *nameOfCourseIn[] = {"MAT272","Object","Oriented","Programming","hello"};
    int x= 7;
    int z = clist(nameOfCourseIn, x);
    cout<<z<<endl;
}


int clist (char *nameOfCourseIn[], int x)
{
        int z= 0;
       for (int i = 0; i < x; i++)
            if (*(*nameOfCourseIn) != '\n')
                z++;

        return z;
}   