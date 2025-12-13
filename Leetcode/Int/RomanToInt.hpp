#pragma once
#include <string>
#include <unordered_map>

namespace BenScr::RomanToInt {
	class Solution {
		const std::unordered_map<char, int> romanTable{
	{ 'I', 1},
	{ 'V', 5},
	{ 'X', 10},
	{ 'L', 50},
	{ 'C', 100},
	{ 'D', 500 },
	{ 'M', 1000 },
		};

	public:
		int romanToInt(std::string s) {
			int result = 0;
			int last = 0;

			for (const auto c : s) {
				if (romanTable.contains(c)) {
					int current = romanTable.at(c);

					if (current > last) {
						result -= last * 2;
					}

					result += current;
					last = current;
				}
			}

			return result;
		}
	};
}