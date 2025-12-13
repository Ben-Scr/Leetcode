#include <iostream>
#include <vector>
#include <limits>
#include "String/Palindrome.hpp"
#include "String/Strstr.hpp"
#include <unordered_set>
#include <unordered_map>


#include "Int/RomanToInt.hpp"

int main()
{
	int value = BenScr::RomanToInt::Solution().romanToInt("MCMXCIV");
	std::cout << value;
}