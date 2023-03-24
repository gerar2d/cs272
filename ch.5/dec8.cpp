#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    for (int counter = 1; counter <= 10; counter++)
    {
        cout<<setw(10)<<(rand() % 6 + 1);
        if (counter % 5 == 0)
        cout<<endl;
    }
    return 0;
}