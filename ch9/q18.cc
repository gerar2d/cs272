#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
    public:
        Triangle (int a1, int b1, int c1);
        
        void setA (int a1);
        void setB (int b1);
        void setC (int c1);
        

        int getA();
        int getB();
        int getC();

        void area();
        void perimeter();
    private:
    int a,b,c;
};

 Triangle::Triangle (int a1, int b1, int c1)
 {
    setA(a1);
    setB(b1);
    setC(c1);
 }

 void Triangle::setA(int a1)
 {
    a = a1;
 }
 void Triangle::setB(int b1)
 {
    b = b1;
 }
 void Triangle::setC(int c1)
 {
    c = c1;
 }

int Triangle::getA ()
{
    return a;
}
int Triangle::getB ()
{
    return b;
}
int Triangle::getC ()
{
    return c;
}

void Triangle::area()
{
	float s, area;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area: "<<area<<endl;
}
void Triangle::perimeter()
{
    cout<<"Perimeter: "<<(a+b+c)<<endl;
}


int main()
{
    Triangle t1 (3,4,5);
    t1.area();
    t1.perimeter();
}