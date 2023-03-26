#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// Loop through the vectors
// check if the current number is the same as the value
// if it's, check if the last value is the same as val
// if it's then decrement the size until it's not


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
