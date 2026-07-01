#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <string>
#include <unordered_map>
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
std::vector<int> findAnagrams(const std::string &s, const std::string &p);
int subarraySum(const std::vector<int> &nums, int target);
std::vector<int> maxSlidingWindow(const std::vector<int> &nums, int k);
std::string minWindow(std::string s, std::string t);
bool minWindow_check(std::unordered_map<char, int> &sm,
                     std::unordered_map<char, int> &tm);
int maxSubArray(const std::vector<int> &nums);
std::vector<std::vector<int>> merge(std::vector<std::vector<int>> &intervals);
void rotate(std::vector<int> &nums, int k);
std::vector<int> productExceptSelf(const std::vector<int> &nums);
int firstMissingPositive(std::vector<int> &nums);
void setZeroes(std::vector<std::vector<int>> &matrix);
std::vector<int> spiralOrder(const std::vector<std::vector<int>> &matrix);
bool canJump(const std::vector<int> &nums);
void rotatePic(std::vector<std::vector<int>> &matrix);
bool searchMatrix(const std::vector<std::vector<int>> &matrix, int target);

#endif
