/*
Write a program that asks the user for an integer number and find the sum of all prime numbers up to that number. 
(Hint: you need define a function to test whether a number is prime!)
*/
#include <iostream>
using namespace std;
int sumP(int n);



int main()
{
	int num,f;
    bool v;
    
    cout<<"enter an integer: ";
    cin>>num;

    f = sumP(num);
    cout<<f<<endl;
}


int sumP(int n)
{

	bool prime[n + 1];

	memset(prime, true, n + 1);

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * 2; i <= n; i += p)
				prime[i] = false;
		}
	}

	int sum = 0;
	
    for (int i = 2; i <= n; i++)
		if (prime[i])
			sum += i;
	
    return sum;
}

