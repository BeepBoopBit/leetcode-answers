#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool isLetterFound = false;
        for(int i = s.size()-1; i >= 0; --i){
            if(s[i] == ' ' && !isLetterFound){
                continue;
            }else{
                isLetterFound = true;
                if(s[i] == ' ' || (i == 0 ? ++count : false)){
                    return count;
                }
                ++count;
            }
        }
        return -1;
    }
};


int main(){
    Solution sol;
    std::cout << sol.lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
    return 0;
}