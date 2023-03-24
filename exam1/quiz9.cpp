/*
Write a function using pointer to receive an int type array and its size, 
and print the elements of this array in reverse order. 
*/
#include <iostream>
using namespace std;
void swap(int* a, int* b);
void reverse(int array[], int array_size);
void print(int* array, int array_size);


int main()
{
	int array[] = {3, 5, 1, -20, 98, 100};

	cout << "Original ";
	print(array, 6);

	cout << "\nReverse ";
	reverse(array, 6);
	print(array, 6);
    cout<<endl;
	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void reverse(int array[], int array_size)
{
    int *x = array,
    *y = array + array_size - 1;
    
    while (x < y) {
        swap(x, y);
        x++;
        y--;
    }
}


void print(int* array, int array_size)
{
	int *length = array + array_size,
    *position = array;
	
    cout << "Array = ";
	
    for (position = array; position < length; position++)
		cout << *position << " ";
}


