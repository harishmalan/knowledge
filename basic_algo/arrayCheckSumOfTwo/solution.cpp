#include <vector>
#include <iostream>
#include <map>
#include <exception>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> map ; 
        int i =0;
        for (auto & it : nums) {
            int comp = target -it;
            auto th = map.find(comp);
            if (th != map.end()) return {map[comp],i};
            map.insert({it, i});
            i++;
    }   
    //return {0,0};
    throw exception();
}
};

int main( int argc, char ** argv ) {
    cout << "vector from initializer list: " << endl;
    vector<int> vil = { 2, 7, 11, 15 };
    vector<int> out;
    Solution test ;
    out = test.twoSum(vil, 9);
    cout << "["<<out[0]<<","<<out[1]<<"]"<<endl;
}
