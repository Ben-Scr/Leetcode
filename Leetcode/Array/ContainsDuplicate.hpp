#pragma once
#include <vector>
#include <unordered_set>

namespace BenScr::ContainsDuplicate
{
    class Solution {
    public:
        bool containsDuplicate(std::vector<int>& nums) {
            std::unordered_set<int> numsHashset;
            numsHashset.reserve(nums.size());

            for (int x : nums) {
                if (!numsHashset.insert(x).second)
                    return true;
            }

            return false;
        }
};
}