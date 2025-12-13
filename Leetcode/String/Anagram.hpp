#pragma once
#include <string>
#include <unordered_map>

namespace BenScr::Anagram {
    class Solution {
    public:
        bool isAnagram(std::string s, std::string t) {
			if (s.size() != t.size()) return false;

			std::unordered_map<char, int> charCount;

            for (const char c : s) {
                charCount[c]++;
			}
            for (const char c : t) {
                charCount[c]--;
            }

            for (const auto& pair : charCount) {
                if (pair.second != 0) {
                    return false;
                }
			}

            return true;
        }
    };
}