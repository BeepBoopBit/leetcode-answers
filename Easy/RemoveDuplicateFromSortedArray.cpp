#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        
        // Store the previous number
        int previousNum = nums[0];
        
        int count = 1, // get the count of the unique number
            initialSize = nums.size(); // store the initial number of elements
        
        // push the first element to the vectr
        nums.push_back(nums[0]);
        for(int i = 1; i < initialSize; ++i){
            // if the previousNumber is not equal to the current number
            if(previousNum != nums[i]){
                // update the previous number
                previousNum = nums[i];
                // increment the count
                ++count;
                // push the current number to the vector
                nums.push_back(nums[i]);
            }
        }
        // erase the initial elements
        nums.erase(nums.begin(), nums.begin()+initialSize);
        return count;
    }
};


int main(){
    Solution s;
    std::vector<int> myVect = {1,4,4,4,5,6,7,7,8};
    std::cout << s.removeDuplicates(myVect) << std::endl;
    for(int i : myVect){
        std::cout << i << " ";
    }

    return 0;
}