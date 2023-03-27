#include <iostream>
using namespace std;
void selectionSort (int list[], int size);
void printList(int list[], int size);


int main()
{
    int list[] = {8,3,7,20,1,99,2};
    int size = sizeof(list)/sizeof(list[0]);
    selectionSort(list, size);
    cout << "Sorted array in Acsending Order:\n";
    //printList(list, size);
    for (int i = 0; i < size; i++)
        cout<<"["<<i<<"] = "<<list[i]<<endl;
}

void swap (int *a, int *b)
{
    int z = *a;
     *a = *b;
     *b = z;
}

void selectionSort (int list[], int size)
{
    for (int index = 0; index < size -1; index++)
    {
        int min_index = index;
        
        for (int i = index+1; i < size; i++)
        {
            if (list[min_index] > list[i])
                {
                    min_index = i;
                }
        }
        swap(&list[min_index], &list[index]);
    }
}

/*
void printList(int list[], int size)
{
    for (int i = 0; i < size; i++)
        cout<<list[i]<<" ";

    cout<<endl;
}
*/