#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int part (int arr[], int low, int high)
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
            swap(&arr[i], &arr[j]);
            i++;
            j++;
        }
    }
    return j-1;
}

void quickSort (int arr[], int low, int high)
{
    if (low < high){
    int pos = part(arr,low,high);
    quickSort(arr, low, pos-1);
    quickSort(arr, pos+1, high);
    }
}

int main()
{
    int arr[] = {6, 5, 33, 77, 89, 55, 1, 1, 55, 80, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"{ ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;
    quickSort(arr, 0, size);
    cout<<"{ ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;
}