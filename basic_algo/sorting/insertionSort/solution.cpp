#include <iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
template<size_t SIZE, class T> inline size_t array_size(T (&arr)[SIZE]) {
    return SIZE;
}
int main( int argc, char ** argv ) 
{
    map <int, bool> set_val; 
    int longest =0; 
    int arr[]={2,1,6,9,4,3};
    for (int i=0 ; i< (int) array_size(arr); i++)
    {
    	//cout << arr[i] << endl;
    	int j=i;
    	while(j>0 && arr[j-1]> arr[j])
    	{
    	swap(arr[j], arr[j-1]);
    	j--;
    	}
    	//cout << arr[i] << endl;
    for (int i=0 ; i< (int) array_size(arr); i++){
    	cout << arr[i] << " ";
    }
    cout << endl ;
    }
    for (int i=0 ; i< (int) array_size(arr); i++){
    	cout << arr[i] << endl;
    } 
}
