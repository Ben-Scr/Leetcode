#pragma once
#include <bitset>

namespace BenScr::HammingWeight {
	class Solution {
	public:
        int hammingWeight(int n) {
            std::bitset<32> bits(n);
            int count = 0;


            for (size_t i = 0; i < 32; i++)
            {
                count += bits[i];
            }

            return count;
        }
	};
}