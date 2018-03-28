#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main( int argc, char ** argv )
{
	vector<int> v;
	int x=0, y=0,z=0;
    puts("Hello, World!");
    int array_1[]={2,36,,7,10,13};
    int array_2[]={3,6,9,11,13,14};
    int array_3[]={5,6.10,11,13,15};
    while (x<4 || y<4 ||z<4 ) 
    {
    	// printf("array_1: %d , array_2: %d , array_3: %d \n",array_1[x], array_2[y],array_3[z]);	
    	if ((array_1[x] == array_2[y]) && (array_2[y]) == array_3[z]){
    		// printf("i am equal\n");
    		v.push_back(array_1[x]);
    		x++;
    		y++;
    		z++;
    	}
    	else{
    		if(array_1[x]<array_2[y])x++;
    		else if(array_2[y]<array_3[z])y++;
    		else z++;
    	}
    }
    vector<int>::iterator itbegin = v.begin();
    vector<int>::iterator itend = v.end();
    for (vector<int>::iterator it = itbegin; it < itend; ++it) {
        cout << *it << ' ';
    }
    return 0;
}
