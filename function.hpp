#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

// Definition for singly-linked list
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *n) : val(x), next(n) {}
};

// Definition for a Node
class Node {
public:
  int val;
  Node *next;
  Node *random;

  Node(int val_) {
    val = val_;
    next = nullptr;
    random = nullptr;
  }
};

// Definition for a binary tree node
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
ListNode *reverseList(ListNode *head);
bool isPalindrome(ListNode *head);
bool hasCycle(ListNode *head);
ListNode *detectCycle(ListNode *head);
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2);
ListNode *addTwoNumbers(ListNode *list1, ListNode *list2);
ListNode *removeNthFromEnd(ListNode *head, int n);
ListNode *swapPairs(ListNode *head);
std::pair<ListNode *, ListNode *> myReverse(ListNode *head, ListNode *tail);
ListNode *reverseKGroup(ListNode *head, int k);
Node *copyRandomListHelper(Node *head,
                           std::unordered_map<Node *, Node *> &cache);
Node *copyRandomList(Node *head);
ListNode *sortList(ListNode *head);
ListNode *mergeKLists(std::vector<ListNode *> &lists);

class LRUCache {
private:
  struct doublelink {
    int key;
    int value;
    doublelink *pre;
    doublelink *nex;
    doublelink() : key(0), value(0), pre(nullptr), nex(nullptr) {}
    doublelink(int k, int v) : key(k), value(v), pre(nullptr), nex(nullptr) {}
  };
  doublelink *head;
  doublelink *tail;
  int cap;
  int size;
  std::unordered_map<int, doublelink *> map;

public:
  LRUCache(int capacity) : cap(capacity), size(0) {
    head = new doublelink;
    tail = new doublelink;
    head->nex = tail;
    tail->pre = head;
  }

  ~LRUCache() {
    doublelink *curr = head;
    while (curr != nullptr) {
      doublelink *next = curr->nex;
      delete curr;
      curr = next;
    }
  }

  void remove(doublelink *node) {
    node->pre->nex = node->nex;
    node->nex->pre = node->pre;
  }

  void addHead(doublelink *node) {
    node->nex = head->nex;
    head->nex->pre = node;
    head->nex = node;
    node->pre = head;
  }

  void moveHead(doublelink *node) {
    remove(node);
    addHead(node);
  }

  doublelink *removeTail() {
    doublelink *tmp = tail->pre;
    remove(tmp);
    return tmp;
  }

  int get(int key) {
    auto it = map.find(key);
    if (it == map.end()) {
      return -1;
    }
    doublelink *tmp = it->second;
    moveHead(tmp);
    return tmp->value;
  }

  void put(int key, int value) {
    auto it = map.find(key);
    if (it == map.end()) {
      if (size == cap) {
        doublelink *newnode = removeTail();
        map.erase(newnode->key);
        delete newnode;
        --size;
      }
      doublelink *test = new doublelink(key, value);
      addHead(test);
      map[key] = test;
      ++size;
    } else {
      doublelink *tmp = it->second;
      tmp->value = value;
      moveHead(tmp);
    }
  }
};

void inorderTraversalHelper(std::vector<int> &result, TreeNode *root);
std::vector<int> inorderTraversal(TreeNode *root);
int maxDepth(TreeNode *root);
TreeNode *invertTree(TreeNode *root);
bool isSymmetricHelper(TreeNode *left, TreeNode *right);
bool isSymmetric(TreeNode *root);
int diameterOfBinaryTree(TreeNode *root);
std::vector<std::vector<int>> levelOrder(TreeNode *root);
TreeNode *sortedArrayToBSTHelper(const std::vector<int> &nums, int left,
                                 int right);
TreeNode *sortedArrayToBST(const std::vector<int> &nums);
bool isValidBSTHelper(TreeNode *root, int low, int high);
bool isValidBST(TreeNode *root);
int kthSmallest(TreeNode *root, int k);
std::vector<int> rightSideView(TreeNode *root);

#endif
