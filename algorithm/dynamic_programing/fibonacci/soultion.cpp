#include <iostream>
#include <stdio.h>

using namespace std;

int fib(const int n)
{
	if (n==1 || n ==2 ) return 1;
	return (fib(n-1) + fib(n-2));
}

int fib_dyna(int n, int *fib)
{
	if (n <= 1) return 1;
	fib[0] = 0;
	fib[1] = 1;
	for (int i=2; i <= n; i++)
		{
		fib[i]=fib_dyna([i-1], fib)+fib_dyna([i-2],fib);
		}
    return fib[n];
}

int main(int argc, char ** argv)
{
	int new *fib = new[50];
	cout << fib_dyna(50, fib) << endl;
	return 0;
}