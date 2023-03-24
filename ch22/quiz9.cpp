#include <iostream>
using namespace std;
void swap(int* a, int* b);
void reverse(int array[], int array_size)
void print(int* array, int array_size);


int main()
{


	int array[] = { 2, 4, -6, 5, 8, -1 };

	cout << "Original ";
	print(array, 6);

	cout << "Reverse ";
	reverse(array, 6);
	print(array, 6);
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


