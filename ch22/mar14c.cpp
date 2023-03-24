#include <iostream>
using namespace std;

struct Student
{
    int num;
    char name[20];
    double score[3];
} student1 = {10001, "Mike", 67.5,89,78.5};

void print (Student *);

int main()
{
    print(& student1);

}

void print (Student *stuPtr)
{
cout << stuPtr->num << " " << (*stuPtr).name << " " << (*stuPtr).score[0] << " "

<<( *stuPtr).score[1] << " " << (*stuPtr).score[2] << " " << endl;
}