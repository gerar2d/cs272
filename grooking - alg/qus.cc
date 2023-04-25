#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high);

int main()
{
    int arr[] = {2, 34, 2, 23, 66, 55, 38, 88, 98, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
        cout<<arr[i]<<' ';
    
    cout<<"\n";
    quickSort(arr, 0, size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int arr[], int low, int high)
{
    int i = low;
    int j = low;
    int pivot = arr[high];

    while (i <= high)
    {
        if (arr[i] > pivot)
            i++;
        
        else
        {
            swap(&arr[i],&arr[j]);
            i++;
            j++;
        }
    }
    return j-1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pos = partition(arr, low, high);
        quickSort(arr, low, pos-1);
        quickSort(arr, pos+1, high);
    }
}