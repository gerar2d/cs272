#include <iostream>
#include <math.h>

using namespace std;

class Triangle{
    public:
    int a,b,c;
    //Default Constructor
    Triangle()
    {
        a = 3;
        b = 4;
        c = 5;
    }
    void area()
    {
	    float s;
	    s = (a+b+c)/2;
	    float Area;
	    //Heron's formula
	    Area = sqrt(s*(s-a)*(s-b)*(s-c));
	    cout<<"Area of a triangle with given sides = "<<Area<<" units square\n";
    }
    void perimeter()
    {
        cout<<"Perimeter of a triangle with given sides = "<<(a+b+c)<<" units";
    }
};
int main()
{
	Triangle t;
	t.area();
	t.perimeter();
	return 0;
}