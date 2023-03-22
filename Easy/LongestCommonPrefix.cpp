#include <iostream>
#include <string>
#include <vector>
#include <stack>

std::string longestCommonPrefix(std::vector<std::string>&strs){
    std::stack<char> _stack;
    for(int i = 0; i < strs[0].length(); ++i){
        _stack.push(strs[0][i]);
        bool isDone = false;
        for(int j = 1; j < strs.size(); ++j){
            if(_stack.top() != strs[j][i]){
                isDone = true;
                _stack.pop();
                break;
            }else if(strs[j].length() <= i){
                isDone = true;
                break;
            }else{
                continue;
            }
        }
        if(isDone){
            break;
        }
    }
    std::string temp;
    while(!_stack.empty()){
        temp = _stack.top() + temp;
        _stack.pop();
    }
    return temp;
}


int main(){
    std::vector<std::string> _vect = {
        "a","b"
    };
    //std::vector<std::string> _vect = {
    //    "dog","racecar", "car"
    //};

    std::cout << longestCommonPrefix(_vect) << std::endl;
    return 0;
}