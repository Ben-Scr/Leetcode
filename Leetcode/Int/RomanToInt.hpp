#pragma once
#include <string>
#include <unordered_map>

namespace BenScr::RomanToInt {
    class Solution {
    public:
        int romanToInt(std::string s) {
            auto value = [](char c) -> int {
                switch (c) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
                default:  return 0;
                }
                };

            int result = 0;
            int last = 0;

            for (char c : s) {
                int current = value(c);
                if (current == 0) continue;

                if (current > last) result -= 2 * last;
                result += current;
                last = current;
            }

            return result;
        }
    };
}