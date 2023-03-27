#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == needle){
            return 0;
        }
        int condition = haystack.length() - needle.length();
        for(int i = 0; i <= condition; ++i){
            if(haystack[i] == needle[0]){
                string subStr = haystack.substr(i,needle.length());
                if(subStr == needle){
                    return i;
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution sl;
    std::cout << sl.strStr("mississippi","issip") << std::endl;

    return 0;
}