#pragma once
#include <string>

namespace BenScr::Strstr {
	class Solution {
	public:
		int strStr(const std::string& haystack, const std::string& needle) {
			if (needle.empty()) return 0;
			auto pos = haystack.find(needle);
			return (pos == std::string::npos) ? -1 : static_cast<int>(pos);
		}
	};
}