#include <iostream>


class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x == 1) return 1;
        int left = 1;
        int right = x;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(mid == x/mid) return mid;
            if(mid < x/mid){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return right;
    }
};


int main(){
    Solution sol;
    std::cout << sol.mySqrt(2) << std::endl;
    return 0;
}