#include <iostream>
using namespace std;
//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' 
//with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.

class Rectangle 
{
    public:
    Rectangle(int l, int b);
    
    void setL(int l);
    void setB(int b);
    
    int getL();
    int getB();
    int area();
    
    private:
    int length;
    int breadth;
};

Rectangle::Rectangle(int l, int b)
    :length(l),breadth(b)
{

}

void Rectangle::setL(int l)
{
    length = l;
}

void Rectangle::setB(int b)
{
    breadth = b;
}

int Rectangle::getL()
{
    return length;
}

int Rectangle::getB()
{
    return breadth;
}

int Rectangle::area()
{
    int area;
    area = length*breadth;
    return area;
}

int main ()
{
    int area;
    Rectangle r1(4,5);
    Rectangle r2(5,8);
    cout<<"area1 (4,5): "<<r1.area()<<endl;
    cout<<"area2 (5,8): "<<r2.area()<<endl;
}