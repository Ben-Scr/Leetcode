#pragma once
#include <vector>

// Rotate.hpp

namespace BenScr {
    class Solution {
    public:
        void rotate(std::vector<int>& nums, int k) {
            int n = nums.size();
            k %= n;

            std::reverse(nums.begin(), nums.end());
            std::reverse(nums.begin(), nums.begin() + k);
            std::reverse(nums.begin() + k, nums.end());
        }
    };
}