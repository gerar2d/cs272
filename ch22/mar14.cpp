#include <iostream>
using namespace std;

struct Student
{
    int num;
    char name[20];
    double score[3];
} student1 = {10001, "Mike", 67.5,89,78.5};

void print (Student );

int main()
{
    print(student1);

}

void print (Student stu)
{
cout << stu.num << " " << stu.name << " " << stu.score[0] << " "

<< stu.score[1] << " " << stu.score[2] << " " << endl;
}