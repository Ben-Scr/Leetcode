#pragma once
#include <vector>
#include <string>

namespace BenScr::FizzBuzz {
	class Solution {
	public:
		std::vector<std::string> fizzBuzz(int n) {
			std::vector<std::string> answer = std::vector<std::string>(n);

			auto getString = [](int i) ->  std::string {
				bool by5 = i % 5 == 0, by3 = i % 3 == 0;

				if (by5) {
					return by3 ? "BuzzFizz" : "Buzz";
				}
				else if (by3) {
					return by5 ? "BuzzFizz" : "Fizz";
				}

				return std::to_string(i);
				};

			for (size_t i = 1; i <= n; i++) {
				answer[i - 1] = getString(i);
			}
		}
	};
}