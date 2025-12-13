#pragma once
#include <string>
#include <vector>

namespace BenScr::LongestCommonPrefix {
	class Solution {
	public:
		std::string longestCommonPrefix(std::vector<std::string>& strs) {
			if (strs.size() == 0) return "";

			std::string referenceString = strs[0];

			for (int i = 0; i < referenceString.size(); ++i) {
				char c = referenceString[i];

				for (int j = 1; j < strs.size(); ++j) {
					if (i >= strs[j].size() || strs[j][i] != c) {
						return referenceString.substr(0, i);
					}
				}
			}

			return referenceString;
		}
	};
}