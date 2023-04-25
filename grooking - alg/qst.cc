#include <iostream>
using namespace std;

void swap(int*, int*);
void printArr(int arr[], int size);
int part(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int main()
{
    int arr[] = {2,6,7,12,4,10,82,46};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Unsorted Array: \n";
    printArr(arr,size);
    quickSort(arr, 0, size -1);

    cout<<"sorted Array: \n";
    printArr(arr,size);  
}

void swap(int *a, int *b)
{
    int holder = *a;
    *a = *b;
    *b = holder; 
}

void printArr (int arr[], int size)
{
   for (int i = 0; i < size; i++)
        cout<<"["<<i<<"]: "<<arr[i]<<endl; 
}

int part(int arr[], int low, int high)
{
    int pivot = arr[high];
    int index = (low - 1);

    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            index++;
            swap(&arr[index], &arr[i]);
        }
    }
    swap(&arr[index + 1], &arr[high]);
    return (index + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = part(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}