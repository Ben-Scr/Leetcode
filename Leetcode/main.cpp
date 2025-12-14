#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Utility.hpp"
#include <unordered_set>

void moveZeroes(std::vector<int>& nums) {
	int currentIndex = 0;

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 0) {
			nums[currentIndex++] = i;
		}
	}

	while (currentIndex < nums.size()) {
		nums[currentIndex++] = 0;
	}
}


int main()
{
	std::vector<int> nums = { 0, 1, 2, 0 ,0 };
	moveZeroes(nums);
	BenScr::Utility::PrintIntVector(nums);
}