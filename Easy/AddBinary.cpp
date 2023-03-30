#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        std::stack<char> stackA, stackB;
        for(auto i: a){
            stackA.push(i);
        }
        for(auto i: b){
            stackB.push(i);
        }
        char carry = '0';
        while(!stackA.empty() || !stackB.empty()){
            char aTop = '0', bTop = '0';
            if(!stackA.empty()){
                aTop = stackA.top();
                stackA.pop();
            }
            if(!stackB.empty()){
                bTop = stackB.top();
                stackB.pop();
            }
            int value = 0;
            if(aTop == '1'){
                value++;
            }
            if(bTop == '1'){
                value++;
            }
            if(carry == '1'){
                value++;
                carry = '0';
            }
            // Everything is 0
            if(value == 0){
                result = '0' + result;
            }
            // There's only one '1'
            else if(value == 1){
                result = '1' + result;
            }
            // There are two '1'
            else if(value == 2){
                result = '0' + result;
                carry = '1';
            }
            // There's 3 '1'
            else if(value == 3){
                result = '1' + result;
                carry = '1';
            }
        }
        if (carry == '1'){
            result = '1' + result;
        }
        return result;
    }
};

int main(){
    Solution sol;
    std::cout << sol.addBinary("101","1011") << std::endl;
    return 0;
}