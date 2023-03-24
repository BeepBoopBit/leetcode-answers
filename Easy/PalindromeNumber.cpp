#include <iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long int tempNumber = 0, tempX = x;

        while(tempX > 0){
            tempNumber = tempNumber*10 + tempX%10;
            tempX/=10;
        }
        return (tempNumber) == x;
    }
};

int main(){
    Solution sol;
    std::cout << sol.isPalindrome(123) << std::endl;

    return 0;
}




// 123 % 10 = 3 -> 300
// 123 / 10 = 12