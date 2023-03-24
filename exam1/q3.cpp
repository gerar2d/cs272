# include <iostream>
 using namespace std;  
 
 int fun( int a )
 { 
      int b = a * 2;
      return b;
  }
 
  int main()
  {
      int y = 5;
 
      cout << fun(y) << endl;
      cout << fun(--y) << endl;
      cout << fun(y--) << endl;
      cout << y <<endl;
   
      return 0;
  }