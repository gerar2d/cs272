#include <iostream>

using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

struct Student
{
    int num;
    char name[20];
    char gender;
    Date birthday;
    double score;
} stu[3] = {{10101, "John",'M',5,23,1982,87.5}, 
{10102, "Mike", 'M',7,1,1984,99},
{10103, "Jolene",'F', 10,22,1981,78.5}};


int main()
{
    cout <<"ID No.\tname\tgender\tbirthday\tscore\n";

    for (int i=0; i<3; i++)
    {
        cout << stu[i].num <<'\t'<<stu[i].name<<'\t'<<stu[i].gender<<'\t';

        cout<< stu[i].birthday.month<<'/'
        <<stu[i].birthday.day<<'/'
        <<stu[i].birthday.year<<'\t';

        cout<<stu[i].score;

        cout<<endl;
    }
    return 0;
}
