#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        auto vectSize = nums.size();
        for(int i = 0; i < vectSize; ++i){
            for(int j = 0; j < vectSize; ++j){
                if(i == j){
                    
                }else if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {0};
    }
};