#include <iostream>
using namespace std;

struct Candidate 
{
    char name[20];
    int count;
};

int main ()
{
    Candidate leader[3] = {{"John",0}, {"Mike", 0}, {"Thomas",0}};
    char candidate_name[20];
    for (int i=0; i<10; i++)
    {
        cin >> candidate_name;
        for (int j=0; j<3; j++)
            if (strcmp (candidate_name, leader[j].name) == 0)
                leader[j].count++;
    }
    cout<<endl;

    for (int i=0; i<3; i++)
        cout << leader[i].name << ":"<<leader[i].count<<endl;

}