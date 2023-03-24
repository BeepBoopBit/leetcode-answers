#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> myMap;
        for(int i = 0; i < nums.size(); ++i){
            myMap[nums[i]] = i;            
        }
        for(int i = 0; i < nums.size(); ++i){
            int complement = target - nums[i];
            auto x = myMap.find(complement);
            if(x != myMap.end() && x->second != i){
                return {i, x->second};
            }
        }
        return {0};
    }
};


int main(){
    Solution s;
    vector<int> myVect = {3,2,4};
    vector<int> result = s.twoSum(myVect, 6);
    for(int i : result){
        cout << i << " ";
    }
    return 0;
}