#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int partion(int *A, int start, int end)
{
	cout <<start<<end;
	int pivot = A[end];
	int pivotIndex = start;
	for (int i = start; i<end; i++){
		if (A[i] <= pivot)
		{
		swap(A[i], A[pivotIndex]);
		pivotIndex++;
		}
	}
	swap(A[pivotIndex], A[end]);
	return pivotIndex;
}

int quickSort( int *A, int start, int end)
{
	cout << start <<" "<< end << endl; 
	if(start < end)
	{
		int partionIndex = partion(A, start, end);
		cout <<partionIndex;
		quickSort(A, start, partionIndex-1);
		quickSort(A, partionIndex+1, end);
	}
}


int main(int argc, char ** argv)
{
	int arr[]={3,6,2,1,7,8,4,2};
	quickSort(arr, 0 , 7);
	cout <<endl;
	for(int &i: arr) cout << i << " ";
}