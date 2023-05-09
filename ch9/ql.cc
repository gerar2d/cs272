#include <iostream>
using namespace std;


class Rectangle
{
public:
Rectangle();
float getLength();
void setLength(float l);
float getWidth();
void setWidth(float w);
float perimeter();
float area();

private:
float length;
float width;
};


Rectangle::Rectangle()
{
length = 1.0;
width = 1.0;
}

float Rectangle::getLength()
{
return length;
}

void Rectangle::setLength(float l){

if((l > 0) && (l < 20))
{
length = l;
}
}

float Rectangle::getWidth()
{
return width;
}

void Rectangle::setWidth(float w)
{
if((w > 0) && (w < 20))
{
width = w;
}
}

float Rectangle::perimeter()
{
float p = 2 * (length + width);
return p;
}

float Rectangle::area()
{
float a = length * width;
return a;
}

int main()
{
Rectangle r1;

r1.setLength(7);
r1.setWidth(19);

cout<<"Length: " <<r1.getLength()<<endl;
cout<<"Width: "<<r1.getWidth()<<endl;
cout<<"Perimeter: "<<r1.perimeter()<<endl;
cout<<"Area: "<<r1.area()<<endl;

}