#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
bool cyclic(int arr[],int array_s) ;
template<size_t SIZE, class T> inline size_t array_size(T (&arr)[SIZE]) {
    return SIZE;
}

int main( int argc, char ** argv )
{
int arr[]={1,2,1,3,4,8};
int array_s = (int) array_size(arr);
//cout << array_size(arr) << endl ;
cyclic(arr, array_s);
if (cyclic(arr, array_s) == true) printf("cyclic found \n");
else printf("cyclic Not found \n");
//printf("%b",cyclic(arr));
return 0;
}

bool cyclic(int arr[], int array_s)
{
	int fp = 0;
	int sp = 0;
	while (true){
	if ( fp < 0 || sp < 0 || fp >= array_s || sp >= array_s ) return false ;
	fp = arr[fp];
	if (fp == sp) return true ;
	fp = arr[fp];
	if (fp == sp) return true ;
	sp = arr[sp];
	if (fp == sp) return true ;
}
}
