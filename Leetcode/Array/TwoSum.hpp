#pragma once
#include <vector>
#include <unordered_map>

namespace BenScr::TwoSum {
    class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::unordered_map<int, int> indexByValue;

            for (int i = 0; i < nums.size(); ++i) {
                int needed = target - nums[i];

                if (indexByValue.count(needed)) {
                    return { indexByValue[needed], i };
                }

                indexByValue[nums[i]] = i;
            }

            return {};
        }
    };
}