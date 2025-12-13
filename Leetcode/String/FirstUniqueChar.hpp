#pragma once
#include <unordered_map>
#include <string>

namespace BenScr::FirstUniqueChar {
    class Solution {
    public:
        int firstUniqChar(std::string s) {
			std::unordered_map<char, int> charCount;

			for (char c : s) {
                charCount[c]++;
            }

			for (int i = 0; i < s.size(); ++i) {
                if (charCount[s[i]] == 1) {
                    return i;
                }
            }

			return -1;
        }
    };
}