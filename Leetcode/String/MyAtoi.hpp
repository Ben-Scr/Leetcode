#pragma once
#include <string>
#include <iostream>

namespace BenScr::Atoi {
	class Solution {
	public:
			int myAtoi(std::string s) {
				constexpr int MaxI32 = std::numeric_limits<int>().max();
				constexpr int MinI32 = std::numeric_limits<int>().min();

				if (s.size() == 0) return 0;

				int num = 0;

				bool isNegative = false;
				bool isPositive = false;
				bool numbersStarted = false;
				int startZeros = 0;

				std::string numbers = "";

				for (const char c : s) {
					if (c == ' ' && (startZeros > 0 || isPositive || isNegative || numbersStarted))
						break;

					if (std::isdigit(c)) {
						if (numbersStarted || !numbersStarted && c != '0') {
							numbers += c;
							numbersStarted = true;
						}
						else {
							startZeros++;
						}
					}
					else if (!numbersStarted && !isNegative && !isPositive && startZeros == 0) {
						if (c == '-') {
							isNegative = true;
						}
						else if (c == '+') {
							isPositive = true;
						}
						else if (numbersStarted || c != ' ') {
							break;
						}
					}
					else if (numbersStarted || c != ' ') {
						break;
					}
				}

				if (numbers.size() == 0) return 0;


				for (const char c : numbers) {
					std::cout << num << '\n';

					if (!isdigit((unsigned char)c)) break;

					int digit = c - '0';

					if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7))
						return isNegative ? INT_MIN : INT_MAX;

					num = num * 10 + digit;
				}

				return isNegative ? -num : num;
			}
	};
}