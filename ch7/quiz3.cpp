# include <iostream>

 
 
using namespace std;

 
 
int f (int *, int *, int *);

 
 
double f ( double * p1, double * p2, double * p3);

 

int main ( )

 
 
{ 

 
 
      int a1 = 3, a2 = 10, a3 = -1, a;

 
 
     double b1 = 0.3, b2 = -0.7, b3 = 2.1, b;

 
 
     a = f ( & a2, & a3, & a1);
 
 

     b = f ( & b1, & b3, & b2);

 
 
     cout << "a=" << a << endl;

 
 
     cout << "b=" << b << endl;

 
 
  }


int f ( int * p1, int * p2, int * p3 )

 
 
{ 
 
 

      if ( *p2 > *p1 )     *p1 = *p2; 

 
 
      if ( *p3 >  *p1)     *p1 = *p3;

 
 
      return *p1;

 
 
} 
 
 

double f ( double * p1, double * p2, double * p3 )
 
 

{ 

 
 
      if ( *p2 < *p1 )     *p1 = *p2; 

 
 
      if ( *p3  < *p1)     *p1 = *p3;

 
 
      return *p1;

 
 
} 