#pragma once
#include <vector>
#include <unordered_map>

namespace BenScr::TwoSum {
    class Solution
    {
    public:
		std::vector<int> twoSum(const std::vector<int> nums, int target) {
			std::unordered_map<int, int> dictionary;

			for (int i = 0; i < nums.size(); i++)
				dictionary.emplace(nums[i], i);

			for (int i = 0; i < nums.size(); i++) {
				int missing = target - nums[i];

				if (dictionary.contains(missing) && dictionary[missing] != i) {
					return { i, dictionary[missing] };
				}
			}

			return std::vector<int>{};
		}
    };
}