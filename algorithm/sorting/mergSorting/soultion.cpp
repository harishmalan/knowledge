
#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int low, int hi)
{
    if (low < hi)
    {
        int mid = low+(hi-low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, hi);
        merge(arr, low, mid, hi);
    }
}

int main( int argc, char ** argv ) 
{
int arr [] ={4,1,5,6,7,6};
mergeSort(arr, 0, 5);
for (int &i : arr){
    cout << i << endl;
}

}