#pragma once
#include <string>
#include <algorithm>
#include <iostream>

namespace BenScr::Palindrome {
	class Solution {
	public:
		bool isPalindrome(std::string s) {
			std::string sLower = s;
			std::transform(sLower.begin(), sLower.end(), sLower.begin(), [](char c) { return std::tolower(c); });
			sLower.erase(std::remove_if(sLower.begin(), sLower.end(), [](char c) { return !std::isalnum(c); }), sLower.end());

			std::string sReversed = sLower;
			std::reverse(sReversed.begin(), sReversed.end());

			std::cout << "Original: " << sLower << ", Reversed: " << sReversed << std::endl;

			return sLower == sReversed;
		}
	};
}