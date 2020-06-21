#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

int main( int argc, char ** argv ) 
{
    map <int, bool> set_val; 
    int longest =0; 
    int arr[]={2,1,6,9,4,3};
    for (int n:arr){
        set_val[n]= true;
    }
     for (auto n:set_val){
        // cout<<n.first << ' ' << n.second <<  endl;
        if(!set_val[(n.first -1)])
        {
            int count =1;
            int curr = n.first ;
            while (set_val[(curr+1)])
            {
                count++;
                curr++;
                // printf ("%d %d", count, curr);
            }
            longest = longest > count ? longest : count ;
        }
    }
    printf( "longest seuence is %d \n", longest);
}