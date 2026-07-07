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

  std::vector<std::vector<int>> setZeroes_matrix{
      {0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(setZeroes_matrix);
  std::cout << "-----" << " The result of setZeroes is below " << "-----"
            << std::endl;
  show2dVector(setZeroes_matrix);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<std::vector<int>> spiralOrder_matrix{
      {1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
  std::vector<int> spiralOrder_result;
  spiralOrder_result = spiralOrder(spiralOrder_matrix);
  std::cout << "-----" << " The result of spiralOrder is below " << "-----"
            << std::endl;
  showVector(spiralOrder_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<int> canJump_nums{3, 2, 1, 0, 4};
  std::vector<int> canJump_nums1{2, 3, 1, 1, 4};
  bool canJump_result;
  bool canJump_result1;
  canJump_result = canJump(canJump_nums);
  canJump_result1 = canJump(canJump_nums1);
  std::cout << "-----" << " The result of canJump is below " << "-----"
            << std::endl;
  std::cout << canJump_result << " " << canJump_result1 << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<std::vector<int>> rotatePic_matrix{
      {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
  rotatePic(rotatePic_matrix);
  std::cout << "-----" << " The result of rotatePic is below " << "-----"
            << std::endl;
  show2dVector(rotatePic_matrix);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  std::vector<std::vector<int>> searchMatrix_matrix{{1, 4, 7, 11, 15},
                                                    {2, 5, 8, 12, 19},
                                                    {3, 6, 9, 16, 22},
                                                    {10, 13, 14, 17, 24},
                                                    {18, 21, 23, 26, 30}};
  bool searchMatrix_result;
  int searchMatrix_target = 5;
  searchMatrix_result = searchMatrix(searchMatrix_matrix, searchMatrix_target);
  std::cout << "-----" << " The result of searchMatrix is below " << "-----"
            << std::endl;
  std::cout << searchMatrix_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode gin_node8(5);
  ListNode gin_node7(4, &gin_node8);
  ListNode gin_node6(8, &gin_node7);
  ListNode gin_node5(1, &gin_node6);
  ListNode gin_node4(6, &gin_node5);
  ListNode gin_node3(5, &gin_node4);
  ListNode gin_node2(1, &gin_node6);
  ListNode gin_node1(4, &gin_node2);
  ListNode *getIntersectionNode_node;
  getIntersectionNode_node = getIntersectionNode(&gin_node1, &gin_node3);
  std::cout << "-----" << " The result of getIntersectionNode is below "
            << "-----" << std::endl;
  std::cout << getIntersectionNode_node->val << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode rl_node5(5);
  ListNode rl_node4(4, &rl_node5);
  ListNode rl_node3(3, &rl_node4);
  ListNode rl_node2(2, &rl_node3);
  ListNode rl_node1(1, &rl_node2);
  ListNode *reverseList_head;
  reverseList_head = reverseList(&rl_node1);
  std::cout << "-----" << " The result of reverseList is below " << "-----"
            << std::endl;
  showList(reverseList_head);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode pr_node6(9);
  ListNode pr_node5(8, &pr_node6);
  ListNode pr_node4(5, &pr_node5);
  ListNode pr_node3(5, &pr_node4);
  ListNode pr_node2(8, &pr_node3);
  ListNode pr_node1(9, &pr_node2);
  bool isPalindrome_result;
  isPalindrome_result = isPalindrome(&pr_node1);
  std::cout << " ----- " << " The result of isPalindrome is below " << "-----"
            << std::endl;
  showList(&pr_node1);
  std::cout << isPalindrome_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode hc_node6(1);
  ListNode hc_node5(1, &hc_node6);
  ListNode hc_node4(2, &hc_node5);
  ListNode hc_node3(5, &hc_node4);
  ListNode hc_node2(8, &hc_node3);
  ListNode hc_node1(9, &hc_node2);
  hc_node6.next = &hc_node3;
  bool hasCycle_result;
  hasCycle_result = hasCycle(&hc_node1);
  std::cout << "-----" << " The result of hasCycle is below " << "-----"
            << std::endl;
  std::cout << hasCycle_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode dc_node6(1);
  ListNode dc_node5(1, &dc_node6);
  ListNode dc_node4(2, &dc_node5);
  ListNode dc_node3(5, &dc_node4);
  ListNode dc_node2(8, &dc_node3);
  ListNode dc_node1(9, &dc_node2);
  dc_node6.next = &dc_node3;
  ListNode *detectCycle_result;
  detectCycle_result = detectCycle(&dc_node1);
  std::cout << "-----" << " The result of hasCycle is below " << "-----"
            << std::endl;
  std::cout << detectCycle_result->val << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode mt_node3(4);
  ListNode mt_node2(2, &mt_node3);
  ListNode mt_node1(1, &mt_node2);
  ListNode mt_node6(4);
  ListNode mt_node5(3, &mt_node6);
  ListNode mt_node4(1, &mt_node5);
  ListNode *mergeTwoLists_result;
  mergeTwoLists_result = mergeTwoLists(&mt_node1, &mt_node4);
  std::cout << "-----" << " The result of mergeTwoLists is below " << "-----"
            << std::endl;
  showList(mergeTwoLists_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode atn_node3(3);
  ListNode atn_node2(4, &atn_node3);
  ListNode atn_node1(2, &atn_node2);
  ListNode atn_node6(4);
  ListNode atn_node5(6, &atn_node6);
  ListNode atn_node4(5, &atn_node5);
  ListNode *addTwoNumbers_result;
  addTwoNumbers_result = addTwoNumbers(&atn_node1, &atn_node4);
  std::cout << "-----" << " The result of addTwoNumbers is below " << "-----"
            << std::endl;
  showList(addTwoNumbers_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode rnfe_node5(5);
  ListNode rnfe_node4(4, &rnfe_node5);
  ListNode rnfe_node3(3, &rnfe_node4);
  ListNode rnfe_node2(2, &rnfe_node3);
  ListNode rnfe_node1(1, &rnfe_node2);
  ListNode *removeNthFromEnd_result;
  removeNthFromEnd_result = removeNthFromEnd(&rnfe_node1, 2);
  std::cout << "-----" << " The result of removeNthFromEnd is below " << "-----"
            << std::endl;
  showList(removeNthFromEnd_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  return 0;
}
