#include <iostream>
using namespace std;

struct Student
{
    int num;
    char name[20];
    char  gender;
    double score;
}student1 = {10001, "Gerard Di Mattia", 'M',97.2}, student2;

int main ()
{
    //Student student1 = {10001, "Gerard Di Mattia", 'M',97.2};
    //Student student2 = {10010, "John", 'M',85};

    student2 = student1;

    cout<<student1.num<<'\t'<<student1.name<<'\t'
    <<student1.gender<<'\t'<<student1.score<<endl;
    cout<<student2.num<<'\t'<<student2.name<<'\t'
    <<student2.gender<<'\t'<<student2.score<<endl;
    return 0;
}