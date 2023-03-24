# include <iostream>
using namespace std;
 
   void modifyArray( int [ ], int );
   void modifyElement ( int );  
 
   int main( )
{
  const int arraySize = 8;
  int a[arraySize] = { 2, -2, 10, -3, -1 ,0, 10, -5 };
 
     modifyArray ( a, arraySize);
 
     for ( int i =0; i < arraySize; i++)
              cout << a[i] << '  '; 
 
  
     modifyElement ( a[4] );
   
     for ( int i =0; i < arraySize; i++)
            cout << a[i] << '  '; 
     
    cout << endl;
 
     
 
     return 0;
}
 
 
void modifyArray ( int b[ ], int sizeOfArray )
{
  for ( int k = 0; k < sizeOfArray; k++)
         b[k] *=2;
}
 
 
void modifyElement ( int e )
{
  e *= 2; 
} 