#include <iostream>
using namespace std;

void selectionSort(int list[], int  size);

int main()
{
    int list[] = {99, 28, 87, 90, 65, 29, 10};
    int size = sizeof(list) / sizeof(list[0]);
    selectionSort(list,size);
    cout<<"Selection Sort: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"["<<i<<"]: "<<list[i]<<endl;
    }
}

void selectionSort(int list[], int  size)
{
    for (int index = 0; index <= (size - 1); index++)
    {
        int s_index = index;
        
        for (int i = (index + 1); i < size; i++)
        {
            if (list[i] < list[s_index])
            {
                s_index = i;
            }
        }
        
        if (list[s_index] != list[index])
        {
            int holder = list[s_index];
            list[s_index] = list[index];
            list[index] = holder;
        }
    }
}