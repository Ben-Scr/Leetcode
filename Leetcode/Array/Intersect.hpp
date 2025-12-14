#pragma once
#include <vector>
#include <algorithm>

namespace BenScr::Intersect {
	class Solution
	{
	public:
		std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
			std::sort(nums1.begin(), nums1.end());
			std::sort(nums2.begin(), nums2.end());

			std::vector<int> result;
			result.reserve(std::min(nums1.size(), nums2.size()));

			size_t i = 0, j = 0;
			while (i < nums1.size() && j < nums2.size()) {
				if (nums1[i] == nums2[j]) {
					result.push_back(nums1[i]);
					++i; ++j;
				}
				else if (nums1[i] < nums2[j]) {
					++i;
				}
				else {
					++j;
				}
			}
			return result;
		}
	};
}