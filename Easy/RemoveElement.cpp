#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for(int i = 0, j = size-1; i < size; ++i){
            if(nums[i] == val){
                for(int k = j; k >= 0; --k){
                    if(nums[j] != val) break;
                    --j; --size;
                }
                if (i >= j) break;
                std::swap(nums[i], nums[j]);
                --j; --size;
            }
        }
  
        return size;
    }
};

int main(){
    Solution sol;
    std::vector<int> nums = {2};
    sol.removeElement(nums, 2);
    return 0;
}
