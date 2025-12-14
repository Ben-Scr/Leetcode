#pragma once
#include <vector>

namespace BenScr::PlusOne {
    class Solution {
    public:
        std::vector<int> plusOne(std::vector<int>& digits) {
            int i = static_cast<int>(digits.size()) - 1;

            for (; i >= 0; --i) {
                if (digits[i] < 9) {
                    digits[i] += 1;
                    return digits;
                }
                digits[i] = 0;
            }
            digits.insert(digits.begin(), 1);
            return digits;
        }
    };
}