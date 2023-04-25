#include <iostream>
using namespace std;

void swap (int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int part(int arr[], int low, int high)
{
    int i = low;
    int u = low;
    int pivot = arr[high];
    while (i <= high)
    {
        if (arr[i] > pivot)
        {
            i++;
        }
        else
        {
            swap(&arr[i],&arr[u]);
            i++;
            u++;
        }
    }
    return u-1;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pos = part(arr, low, high);
        quicksort(arr, low, pos-1);
        quicksort(arr, pos+1, high);
    }
}

int main()
{
    int arr[] = {23, 76, 94, 77, 44, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"original:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"["<<i<<"]: "<<arr[i]<<endl;
    }
    
    quicksort(arr, 0, size-1);
    
    cout<<"sorted:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"["<<i<<"]: "<<arr[i]<<endl;
    }
}

