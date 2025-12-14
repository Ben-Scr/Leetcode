#pragma once
#include <vector>

namespace BenScr::MoveZeros {
    class MoveZeros
    {
    public:
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
    };
}