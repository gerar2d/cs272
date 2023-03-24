#include <iostream>
using namespace std;

struct Student
{
    int num;
    char name[20];
    char  gender;
    double score;
};

int main ()
{

    Student student1;
    student1.num = 10010;
    strcpy(student1.name, "Gerard");
    student1.gender = 'M';
    student1.score = 97.2;

    cout<<student1.num<<'\t'<<student1.name<<'\t'
    <<student1.gender<<'\t'<<student1.score<<endl;
    return 0;
}