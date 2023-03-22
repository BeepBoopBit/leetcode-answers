#include <iostream>
#include <stack>

bool isValid(std::string s){
        std::stack<char> _stack;
        for(int i = 0; i < s.length(); ++i){
            char value = s[i];
            if(value == '[' || value == '{' || value == '('){
                _stack.push(value);
            }else{
                if(_stack.empty()){
                    return false;
                }
                char _top = _stack.top();
                if(_top == '[' && value == ']'){
                    _stack.pop();
                }else if(_top == '{' && value == '}'){
                    _stack.pop();
                }else if(_top == '(' && value == ')'){
                    _stack.pop();
                }else{
                    break;
                }
            }
        }
        return _stack.empty();
}

int main(){
    std::cout << std::boolalpha << isValid(")(") << std::endl;
    std::cout << std::boolalpha << isValid("(") << std::endl;
    std::cout << std::boolalpha << isValid(")") << std::endl;
    return 0;
}