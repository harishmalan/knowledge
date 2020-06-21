#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
bool cyclic(int arr[],int array_s) ;
template<size_t SIZE, class T> inline size_t array_size(T (&arr)[SIZE]) {
    return SIZE;
}

inline int comp(int input , int m, int n ) { return (input ^ ((1U << m+1) -1) ^ ((1U << n) -1)); }

int main( int argc, char ** argv )
{
int a= 12;
int m = 2;
int n= 1;
int mask =0;
mask = ((1U << m+1) -1) ^ ((1U << n) -1);
printf( "%d", comp(0xFE, 5, 3));
return 0;
}











