#include <iostream>
#include <stdio.h>

using namespace std;

int fib(const int n)
{
	if (n==1 || n ==2 ) return 1;
	return (fib(n-1) + fib(n-2));
}

int fib_dyna(int n)
{
	if (n <= 1) return 1;
	double *fib = new double[n];
	fib[0] = 0;
	fib[1] = 1;
	for (int i=2; i <= n; i++)
		{
		fib[i]=fib[i-1]+fib[i-2];
		}
    return fib[n];
}

int main(int argc, char ** argv)
{
	cout << fib_dyna(50) << endl;
	return 0;
}