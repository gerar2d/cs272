#include <iostream>
#include <stdlib.h>  
#include <time.h> 
using namespace std;

int moveHare(int *a,int *b);
int moveTortoise(int *c, int *d);
void posLine(int *e, int *f);

int main()
{
cout<<"\nBANG !!!!!\n";
cout<<"AND THEY'RE OFF !!!!!\n\n";

int hare =1;
int tortoise =1;


int hscore = 1;
int tscore = 1;

int hup,tup;

srand (time(NULL));
int a = rand() % 9+1;
int b = rand() % 9+1;

do
{
    if (hscore < 0)
    {
        hscore = 0;
    }
    if (tscore < 0)
    {
        tscore = 0;
    }
    hscore += moveHare(&hare, &a);
    tscore += moveTortoise(&tortoise, &b);    
    
    a = rand() % 9+1;
    b = rand() % 9+1;
    
    if (hscore != tscore){
        
        posLine(&hscore, &tscore);

    }else
        cout<<"OUCH!!!\n";

}while (!((hscore > 70) || (tscore > 70)));

if ((hscore > 70) && (tscore > 70))
cout<<"It's a tie !!!\n";

else if (hscore > 70)
cout<<"\nYuch\n\n";

else if (tscore > 70)
cout<<"\nTORTOISE WINS!!! YAY!!!\n\n";

}


int moveTortoise(int *a, int *b)
{
  
    switch(*b){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: 
    return *a+3;
    break;
    case 6:
    case 7: 
    return *a-6;
    break;
    case 8:
    case 9:
    case 10: 
    return *a+1;
    break;
    } 

    return *a;
}

int moveHare(int *c, int *d)
{

    switch(*d){
    case 1:
    case 2: 
    return *c+0;
    break;
    case 3:
    case 4: 
    return *c+9;
    break;
    case 5: 
    return *c-12;
    break;
    case 6:
    case 7:
    case 8: 
    return *c+1;
    break;
    case 9:
    case 10: 
    return *c-2;
    break;
    } 
    return *c;
}

void posLine(int *e, int *f)
{
    char line[100] = {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};
    line[*e] = 'H';
    line[*f] = 'T';
    cout<<line<<endl;
}
