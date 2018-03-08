#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main( int argc, char ** argv ) {
	int logest =0 , buffer =0;
	int a[4][5]={
		{0, 1, 0, 1, 0},
		{0, 1, 1, 1, 0},
		{1, 1, 1, 1, 0},
		{0, 1, 1, 1, 1}
	};
		cout << "Input" << endl ;
	for (int i=0 ; i<4; i++){
		for( int j =0; j<5 ; j++)
		{
			cout << a[i][j]<<", ";
		}
		cout <<"\n" ;
	}
	cout << "Output" << endl ;
	for (int i=0 ; i<4; i++){
		for( int j=0; j<5 ; j++)
		{
			if(j !=0 || i != 0)
			{
				if(a[i][j])
				{
				buffer = min(a[i-1][j-1],a[i-1][j]);
				a[i][j] = min(buffer,a[i][j-1]) + a[i][j] ;
				logest = max(logest, a[i][j]);
				}
				cout << a[i][j]<<", ";
			}
			else cout << a[i][j]<<", ";
		}
		cout <<"\n" ;
	}
	cout<< "longest square in Matrix : " << logest << endl ;
	return 0;
}
