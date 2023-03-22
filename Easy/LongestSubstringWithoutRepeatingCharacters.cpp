#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		auto sSize = s.length();
        if(sSize == 1){
            return 1;
        }
		std::map<char, int> indivChar;
        int count = 0, maxCount = 0, mainIndex = 0;
		for(int i = 0; i < sSize; ++i){
			// therefore we found it
			if(indivChar.find(s[i]) != indivChar.end()){
				if(maxCount < count){
					maxCount = count;
				}
				count = 0;
				indivChar.erase(indivChar.begin(), indivChar.end());
				i = mainIndex++;
			}else{
				indivChar[s[i]] = 1;
				++count;
			}
		}
		if(maxCount < count){
			maxCount = count;
		}
		return maxCount;
    }
};