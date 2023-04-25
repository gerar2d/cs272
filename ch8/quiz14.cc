
#include <iostream>
using namespace std;

int sum(int x);

int main()
{
	int a;
    cout<<"Enter a Number: ";
    cin>>a;
	cout<<sum(a)<<endl;
	return 0;
}


int sum(int n)
{
	if (n <= 1)
		return n;
	return n + sum(n - 1);
}
