#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <string>
#include <vector>

// function
std::vector<std::vector<int>> twoSum(const std::vector<int> &nums, int target);
std::vector<std::vector<std::string>>
groupAnagrams(const std::vector<std::string> &strs);
int longestConsecutive(const std::vector<int> &nums);
void moveZeroes(std::vector<int> &nums);
int maxArea(const std::vector<int> &height);
std::vector<std::vector<int>> threeSum(std::vector<int> &nums);
int trap(const std::vector<int> &height);
int lengthOfLongestSubstring(const std::string &s);

#endif
