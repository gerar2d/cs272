#include<iostream>
using namespace std;


class Rational
{
    public:
        Rational(int numerator,int denominator);
        Rational();
        
        void setNum(int numerator);
        void setDen(int denominator);

        int getNum ();
        int getDen ();
        
        void add(Rational a, Rational b);
        void sub(Rational a, Rational b);
        void mult(Rational a, Rational b);
        void div(Rational a, Rational b);
        
        void rf();
        
        void printNumber(Rational a,Rational b);
        void printFNumber(Rational a,Rational b);
        void print();
        
    private:
        int num;
        int den;
};

Rational::Rational(int numerator,int denominator)
{

    setNum(numerator);
    setDen(denominator);
}

Rational::Rational()
{
}

void Rational::setNum(int numerator = 1)
{
    num = numerator;
}

void Rational::setDen(int denominator = 1)
{
    den = denominator;
}

int Rational::getNum ()
{
    return num;
}

int Rational::getDen ()
{
    return den;
}


void Rational::add(Rational a, Rational b)
{
    num = a.num*b.den + a.den*b.num;
    den = a.den*b.den;
    rf();
    cout<<"Addition: "<<endl;
}

void Rational::sub(Rational a, Rational b)
{
    num = a.num*b.den - a.den*b.num;
    den = a.den*b.den;
    rf();
    cout<<"Subtraction: "<<endl;
    
}

void Rational::mult(Rational a, Rational b)
{
    num = a.num*b.num;
    den = a.den*b.den;
    rf();
    cout<<"Multiplication: "<<endl;
}

void Rational::div(Rational a, Rational b)
{
    num = a.num*b.den;
    den = a.den*b.num;
    rf();
    cout<<"Division: "<<endl;
}
void Rational::printNumber(Rational a,Rational b)
{
cout<<"The original Rational numbers: "<<endl;
cout<<a.num<<'/'<<a.den<<endl;
cout<<b.num<<'/'<<b.den<<endl<<endl;
}

void Rational::printFNumber(Rational a,Rational b)
{
cout<<"Rational numbers in floating points: "<<endl;
cout<<float(a.num)/float(a.den)<<endl;
cout<<float(b.num)/float(b.den)<<endl<<endl;
}

void Rational::rf()
{
    int a,b,c;
    a = num;
    b = den;
    do
    {
        c = a%b;
        a = b;
        b = c;
    }
    while(c != 0);
    num = num/a;
    den = den/a;
}

void Rational::print()
{
cout<<num<<"/"<<den<<endl<<endl;
}

int main()
{
    int n1, n2, d1, d2;
    cout<<"Enter 1st numerator: ";
    cin>>n1;
    cout<<"Enter 1st denominator: ";
    cin>>d1;
    cout<<"Enter 2st numerator: ";
    cin>>n2;
    cout<<"Enter 2st denominator: ";
    cin>>d2;
    Rational r1(n1,d1);
    Rational r2(n2,d2);
    
    Rational r3;
    r3.add(r1,r2);
    cout<<r1.getNum()<<"/"<<r1.getDen()<<" + "<<r2.getNum()<<"/"<<r2.getDen()<<" = ";
    r3.print();
    r3.sub(r1,r2);
    if (r3.getNum() == 0)
        cout<<"undefined"<<endl;
    else{
    cout<<r1.getNum()<<"/"<<r1.getDen()<<" - "<<r2.getNum()<<"/"<<r2.getDen()<<" = ";
    r3.print();
    }
    r3.mult(r1,r2);
    cout<<r1.getNum()<<"/"<<r1.getDen()<<" * "<<r2.getNum()<<"/"<<r2.getDen()<<" = ";
    r3.print();
    r3.div(r1,r2);
    cout<<r1.getNum()<<"/"<<r1.getDen()<<" / "<<r2.getNum()<<"/"<<r2.getDen()<<" = ";
    r3.print();
    r3.printNumber(r1,r2);
    r3.printFNumber(r1,r2);
}
