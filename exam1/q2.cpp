#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int row = 1; row <= size; ++row) 
    {
        for (int col = 1; col <= size; ++col) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}