#include <iostream>

using namespace std;

double find_volume (double r, double h)
{
double v;
v = (3.1416*r*r*h);

return v;
}

int main() {

float r,h;

cout<<"enter the radius and height of the cylinder : ";

cin>>r>>h;

float volume=find_volume(r,h);

cout<<"volume of the cylinder : "<<volume;

return 0;
}