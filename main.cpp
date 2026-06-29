#include "function.hpp"
#include "helper.hpp"

#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> twoSum_nums{2, 7, 11, 15};
  int twoSum_target = 9;
  std::vector<std::vector<int>> twoSum_results;
  twoSum_results = twoSum(twoSum_nums, twoSum_target);
  std::cout << "-----" << " The result of twoSum is below " << "-----"
            << std::endl;
  show2dVector(twoSum_results);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<std::string> groupAnagrams_strs{"eat", "tea", "tan",
                                              "ate", "nat", "bat"};
  std::vector<std::vector<std::string>> groupAnagrams_results;
  groupAnagrams_results = groupAnagrams(groupAnagrams_strs);
  std::cout << "-----" << " The result of groupAnagrams is below " << "-----"
            << std::endl;
  show2dStringVector(groupAnagrams_results);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> longestConsecutive_nums{100, 4, 200, 1, 3, 2};
  int longestConsecutive_result;
  longestConsecutive_result = longestConsecutive(longestConsecutive_nums);
  std::cout << "-----" << " The result of longestConsecutive is below "
            << "-----" << std::endl;
  std::cout << longestConsecutive_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> moveZeroes_nums{0, 1, 0, 3, 12};
  moveZeroes(moveZeroes_nums);
  std::cout << "-----" << " The result of moveZeroes is below " << "-----"
            << std::endl;
  showVector(moveZeroes_nums);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> maxArea_height{1, 8, 6, 2, 5, 4, 8, 3, 7};
  int maxArea_result;
  maxArea_result = maxArea(maxArea_height);
  std::cout << "-----" << " The result of maxArea is below " << "-----"
            << std::endl;
  std::cout << maxArea_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> threeSum_nums{-1, 0, 1, 2, -1, -4};
  std::vector<std::vector<int>> threeSum_results;
  threeSum_results = threeSum(threeSum_nums);
  std::cout << "-----" << " The result of threeSum is below " << "-----"
            << std::endl;
  show2dVector(threeSum_results);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> trap_height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  int trap_water;
  trap_water = trap(trap_height);
  std::cout << "-----" << " The result of trap is below " << "-----"
            << std::endl;
  std::cout << trap_water << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::string lengthOfLongestSubstring_string = "abcabcbb";
  int lengthOfLongestSubstring_length;
  lengthOfLongestSubstring_length =
      lengthOfLongestSubstring(lengthOfLongestSubstring_string);
  std::cout << "-----" << " The result of lengthOfLongestSubstring is below "
            << "-----" << std::endl;
  std::cout << lengthOfLongestSubstring_length << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::string findAnagrams_s = "cbaebabacd";
  std::string findAnagrams_p = "abc";
  std::vector<int> findAnagrams_result;
  findAnagrams_result = findAnagrams(findAnagrams_s, findAnagrams_p);
  std::cout << "-----" << " The result of findAnagrams is below " << "-----"
            << std::endl;
  showVector(findAnagrams_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> subarraySum_nums{1, 2, 3};
  int subarraySum_target = 3;
  int subarraySum_result;
  subarraySum_result = subarraySum(subarraySum_nums, subarraySum_target);
  std::cout << "-----" << " The result of subarraySum is below " << "-----"
            << std::endl;
  std::cout << subarraySum_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> maxSlidingWindow_nums{1, 3, -1, -3, 5, 3, 6, 7};
  int maxSlidingWindow_k = 3;
  std::vector<int> maxSlidingWindow_result;
  maxSlidingWindow_result =
      maxSlidingWindow(maxSlidingWindow_nums, maxSlidingWindow_k);
  std::cout << "-----" << " The result of maxSlidingWindow is below " << "-----"
            << std::endl;
  showVector(maxSlidingWindow_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::string minWindow_s = "ADOBECODEBANC";
  std::string minWindow_t = "ABC";
  std::string minWindow_result;
  minWindow_result = minWindow(minWindow_s, minWindow_t);
  std::cout << "-----" << " The result of minWindow is below " << "-----"
            << std::endl;
  std::cout << minWindow_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> maxSubArray_nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int maxSubArray_result;
  maxSubArray_result = maxSubArray(maxSubArray_nums);
  std::cout << "-----" << " The result of maxSubArray is below " << "-----"
            << std::endl;
  std::cout << maxSubArray_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<std::vector<int>> merge_intervals{
      {1, 3}, {2, 6}, {8, 10}, {15, 18}};
  std::vector<std::vector<int>> merge_result;
  merge_result = merge(merge_intervals);
  std::cout << "-----" << " The result of merge is below " << "-----"
            << std::endl;
  show2dVector(merge_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> rotate_nums{1, 2, 3, 4, 5, 6, 7};
  int rotate_k = 3;
  rotate(rotate_nums, rotate_k);
  std::cout << "-----" << " The result of rotate is below " << "-----"
            << std::endl;
  showVector(rotate_nums);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> productExceptSelf_nums{1, 2, 3, 4};
  std::vector<int> productExceptSelf_result;
  productExceptSelf_result = productExceptSelf(productExceptSelf_nums);
  std::cout << "-----" << " The result of productExceptSelf is below "
            << "-----" << std::endl;
  showVector(productExceptSelf_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> firstMissingPositive_nums{3, 4, -1, 1};
  int firstMissingPositive_result;
  firstMissingPositive_result = firstMissingPositive(firstMissingPositive_nums);
  std::cout << "-----" << " The result of firstMissingPositive is below "
            << "-----" << std::endl;
  std::cout << firstMissingPositive_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  return 0;
}
