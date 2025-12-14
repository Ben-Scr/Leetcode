#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace BenScr::Utility {
	void PrintIntVector(const std::vector<int>& nums) {
		std::string s;

		int length = nums.size();
		for (size_t i = 0; i < length; i++) {

			if (i < length - 1)
				s += std::to_string(nums[i]) + ", ";
			else
				s += std::to_string(nums[i]);
		}

		std::cout << "[" << s << "]" << '\n';
	}
}