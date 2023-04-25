#include <iostream>
using namespace std;

void selectionSort(int list[], int size);

int main()
{
    int list[] = {55,65,10,66,34,55,77,88,5,3,8,1};
    int size = (sizeof(list)/sizeof(list[0]));
    
    selectionSort(list, size);
    cout<<"Sorted Array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"["<<i<<"]: "<<list[i]<<endl;
    }

}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(int list[], int size)
{
    for (int index = 0; index <= (size-1); index++)
    {
        int min_index = index;
        
        for (int i = index+1; i < size; i++)
        {
            if (list[i] < list[min_index])
            {
                min_index = i;
            }
        }
        swap(&list[min_index], &list[index]);
    }
}