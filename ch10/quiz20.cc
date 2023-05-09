#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle(int l,int b);
    int area();
    void setL(int l);
    void setB(int b);

    int getL();
    int getB();
private:
    int length,breadth;
};


Rectangle::Rectangle(int l,int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
   int a=length*breadth;
    return a; 
}

void Rectangle::setB(int b)
{
    breadth = b;
}

void Rectangle::setL(int l)
{
    length = l;
}

int Rectangle::getL()
{
    return length;
}

int Rectangle::getB()
{
    return breadth;
}



int main()
{
int area;
Rectangle R1(4,5);
Rectangle R2(5,8);

area=R1.area();
cout<<"\nArea of rectangle(4,5): "<<area;

area=R2.area();
cout<<"\nArea of rectangle(5,8): "<<area;

cout<<endl;
}