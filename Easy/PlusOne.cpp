#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i >= 0;--i){
            if(digits[i] == 9){
                if((i-1) < 0){
                    digits.insert(digits.begin(), 1);
                    digits[1] = 0;
                }else{
                    digits[i] = 0;
                }
                continue;
            }
            digits[i] += 1;
            break;
        }
        return digits;
    }
};

int main(){
    Solution sol;
    std::vector<int> digits = {9,9,9};
    for(auto i: sol.plusOne(digits)){
        std::cout << i << std::endl;
    }
    return 0;
}