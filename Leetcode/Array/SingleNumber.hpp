#pragma once
#include <vector>

namespace BenScr {
    class Solution {
    public:
        int singleNumber(std::vector<int>& nums) {
            int result = 0;

            for (auto n : nums) {
                result ^= n;
            }

            return result;
        }
    };

}