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

  ListNode sp_node6(6);
  ListNode sp_node5(5, &sp_node6);
  ListNode sp_node4(4, &sp_node5);
  ListNode sp_node3(3, &sp_node4);
  ListNode sp_node2(2, &sp_node3);
  ListNode sp_node1(1, &sp_node2);
  ListNode *swapPairs_result;
  swapPairs_result = swapPairs(&sp_node1);
  std::cout << "-----" << " The result of swapPairs is below " << "-----"
            << std::endl;
  showList(swapPairs_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode rkg_node5(5);
  ListNode rkg_node4(4, &rkg_node5);
  ListNode rkg_node3(3, &rkg_node4);
  ListNode rkg_node2(2, &rkg_node3);
  ListNode rkg_node1(1, &rkg_node2);
  ListNode *reverseKGroup_result;
  reverseKGroup_result = reverseKGroup(&rkg_node1, 2);
  std::cout << "-----" << " The result of reverseKGroup is below " << "-----"
            << std::endl;
  showList(reverseKGroup_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  Node crl_node5(1);
  Node crl_node4(10);
  Node crl_node3(11);
  Node crl_node2(13);
  Node crl_node1(7);
  crl_node1.next = &crl_node2;
  crl_node2.next = &crl_node3;
  crl_node3.next = &crl_node4;
  crl_node4.next = &crl_node5;
  crl_node1.random = nullptr;
  crl_node2.random = &crl_node1;
  crl_node3.random = &crl_node5;
  crl_node4.random = &crl_node3;
  crl_node5.random = &crl_node1;
  Node *copyRandomList_result;
  copyRandomList_result = copyRandomList(&crl_node1);
  std::cout << "-----" << " The result of copyRandomList is below " << "-----"
            << std::endl;
  showRandomList(copyRandomList_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode sl_node5(1);
  ListNode sl_node4(2, &sl_node5);
  ListNode sl_node3(3, &sl_node4);
  ListNode sl_node2(4, &sl_node3);
  ListNode sl_node1(5, &sl_node2);
  ListNode *sortList_result;
  sortList_result = sortList(&sl_node1);
  std::cout << "-----" << " The result of sortList is below " << "-----"
            << std::endl;
  showList(sortList_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  ListNode mkl_node3(5);
  ListNode mkl_node2(4, &mkl_node3);
  ListNode mkl_node1(1, &mkl_node2);
  ListNode mkl_node6(4);
  ListNode mkl_node5(3, &mkl_node6);
  ListNode mkl_node4(1, &mkl_node5);
  ListNode mkl_node8(6);
  ListNode mkl_node7(2, &mkl_node8);
  std::vector<ListNode *> mergeKLists_lists{&mkl_node1, &mkl_node4, &mkl_node7};
  ListNode *mergeKLists_result;
  mergeKLists_result = mergeKLists(mergeKLists_lists);
  std::cout << "-----" << " The result of mergeKLists is below " << "-----"
            << std::endl;
  showList(mergeKLists_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  LRUCache lru(2);
  lru.put(1, 1);
  lru.put(2, 2);
  std::cout << "-----" << " The result of LRUCache is below " << "-----"
            << std::endl;
  std::cout << lru.get(1) << std::endl;
  lru.put(3, 3);
  std::cout << lru.get(2) << std::endl;
  lru.put(4, 4);
  std::cout << lru.get(1) << std::endl;
  std::cout << lru.get(3) << std::endl;
  std::cout << lru.get(4) << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  TreeNode *it_root = new TreeNode(1);
  it_root->left = new TreeNode(2);
  it_root->right = new TreeNode(3);
  std::vector<int> inorderTraversal_result;
  inorderTraversal_result = inorderTraversal(it_root);
  std::cout << "-----" << " The result of inorderTraversal is below " << "-----"
            << std::endl;
  showVector(inorderTraversal_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete it_root->left;
  delete it_root->right;
  delete it_root;

  TreeNode *md_root = new TreeNode(1);
  md_root->left = new TreeNode(2);
  md_root->right = new TreeNode(3);
  int maxDepth_result;
  maxDepth_result = maxDepth(md_root);
  std::cout << "-----" << " The result of maxDepth is below " << "-----"
            << std::endl;
  std::cout << maxDepth_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete md_root->left;
  delete md_root->right;
  delete md_root;

  TreeNode *itr_root = new TreeNode(1);
  itr_root->left = new TreeNode(2);
  itr_root->right = new TreeNode(3);
  TreeNode *invertTree_root;
  invertTree_root = invertTree(itr_root);
  std::cout << "-----" << " The result of invertTree is below " << "-----"
            << std::endl;
  showVector(inorderTraversal(invertTree_root));
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete itr_root->left;
  delete itr_root->right;
  delete itr_root;

  TreeNode *is_root = new TreeNode(1);
  is_root->left = new TreeNode(2);
  is_root->right = new TreeNode(3);
  bool isSymmetric_result;
  isSymmetric_result = isSymmetric(is_root);
  std::cout << "-----" << " The result of isSymmetric is below " << "-----"
            << std::endl;
  std::cout << isSymmetric_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete is_root->left;
  delete is_root->right;
  delete is_root;

  TreeNode *dobt_root = new TreeNode(1);
  dobt_root->left = new TreeNode(2);
  dobt_root->right = new TreeNode(3);
  int diameterOfBinaryTree_result;
  diameterOfBinaryTree_result = diameterOfBinaryTree(dobt_root);
  std::cout << "-----" << " The result of diameterOfBinaryTree is below "
            << "-----" << std::endl;
  std::cout << diameterOfBinaryTree_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete dobt_root->left;
  delete dobt_root->right;
  delete dobt_root;

  TreeNode *lo_root = new TreeNode(1);
  lo_root->left = new TreeNode(2);
  lo_root->right = new TreeNode(3);
  std::vector<std::vector<int>> levelOrder_result;
  levelOrder_result = levelOrder(lo_root);
  std::cout << "-----" << " The result of levelOrder is below "
            << "-----" << std::endl;
  show2dVector(levelOrder_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete lo_root->left;
  delete lo_root->right;
  delete lo_root;

  std::vector<int> sortedArrayToBST_nums{-10, -3, 0, 5, 9};
  TreeNode *sortedArrayToBST_root;
  sortedArrayToBST_root = sortedArrayToBST(sortedArrayToBST_nums);
  std::cout << "-----" << " The result of sortedArrayToBST is below " << "-----"
            << std::endl;
  show2dVector(levelOrder(sortedArrayToBST_root));
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;

  TreeNode *ivb_root = new TreeNode(2);
  ivb_root->left = new TreeNode(1);
  ivb_root->right = new TreeNode(3);
  bool isValidBST_result;
  isValidBST_result = isValidBST(ivb_root);
  std::cout << "-----" << " The result of isValidBST is below "
            << "-----" << std::endl;
  std::cout << isValidBST_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete ivb_root->left;
  delete ivb_root->right;
  delete ivb_root;

  TreeNode *ks_root = new TreeNode(3);
  ks_root->left = new TreeNode(1);
  ks_root->left->right = new TreeNode(2);
  ks_root->right = new TreeNode(4);
  int kthSmallest_result;
  kthSmallest_result = kthSmallest(ks_root, 2);
  std::cout << "-----" << " The result of kthSmallest is below "
            << "-----" << std::endl;
  std::cout << kthSmallest_result << std::endl;
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete ks_root->left->right;
  delete ks_root->left;
  delete ks_root->right;
  delete ks_root;

  TreeNode *rsv_root = new TreeNode(1);
  rsv_root->left = new TreeNode(2);
  rsv_root->left->right = new TreeNode(5);
  rsv_root->right = new TreeNode(3);
  rsv_root->right->right = new TreeNode(4);
  std::vector<int> rightSideView_result;
  rightSideView_result = rightSideView(rsv_root);
  std::cout << "-----" << " The result of rightSideView is below "
            << "-----" << std::endl;
  showVector(rightSideView_result);
  std::cout << "-----" << " End " << "-----" << std::endl;
  std::cout << std::endl;
  delete rsv_root->left->right;
  delete rsv_root->left;
  delete rsv_root->right->right;
  delete rsv_root->right;
  delete rsv_root;
  return 0;
}
