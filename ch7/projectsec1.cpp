#include <iostream>
#include <stdlib.h>  
#include <time.h> 
using namespace std;

int moveHare(int *a);
int moveTortoise(int *a);

int main()
{
int hareSquare = 1;
int tortoiseSquare =1;
unsigned int h = 0;
unsigned int t = 0;

do
{
  h += moveHare(&hareSquare);
  t += moveTortoise(&tortoiseSquare);
    cout<<h<<endl<<t<<endl;
}while (h <= 70 || t <= 70);

cout<<"------"<<h<<endl<<"------------"<<t<<endl;
}


int moveHare(int *a)
{
    srand (time(NULL));
    int steps = rand() % 9+1;
    switch(steps){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: 
    return *a+3;
    break;
    case 6:
    case 7: 
    return *a-6;
    break;
    case 8:
    case 9:
    case 10: 
    return *a+1;
    break;
    } 
    return *a;
}

int moveTortoise(int *b)
{
    srand (time(NULL));
    int steps = rand() % 9 +1;
    switch(steps){
    case 1:
    case 2: 
    return *b+0;
    break;
    case 3:
    case 4: 
    return *b+9;
    break;
    case 5: 
    return *b-12;
    break;
    case 6:
    case 7:
    case 8: 
    return *b+1;
    break;
    case 9:
    case 10: 
    return *b-2;
    break;
    } 
    return *b;
}