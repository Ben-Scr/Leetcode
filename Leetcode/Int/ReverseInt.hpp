#pragma once
#include <limits>

namespace BenScr {
    class ReverseInt
    {
    public:
        int reverse(int x) {
			constexpr int MaxInt = std::numeric_limits<int>::max();
			constexpr int MinInt = std::numeric_limits<int>::min();

			int reversed = 0;


			while (x != 0) {
				int digit = x % 10;

				if (reversed > MaxInt / 10 || (reversed == MaxInt / 10 && digit > 7))
				{
					reversed = 0;
					break;
				}
				if (reversed < MinInt / 10 || (reversed == MinInt / 10 && digit < -8))
				{
					reversed = 0;
					break;
				}

				reversed = reversed * 10 + digit;
				x /= 10;
			}

			return reversed;
        }
    };
}