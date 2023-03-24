#include <iostream>
using namespace std;
int sumP(int n);
bool isPrime(int n);


int main()
{
	int num,f;
    bool v;
    cout<<"enter an integer: ";
    cin>>num;
	v = isPrime(num);

    if (v == true){
        f = sumP(num);
        cout<<f<<endl;
    }
    else    
        cout<<"not a prime"<<endl;
}

bool isPrime(int n) {
  bool v = true;

 
  if (n == 0 || n == 1) {
    v = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      v = false;
      break;
    }
  }

  return v;
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