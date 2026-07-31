#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
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
void flatten(TreeNode *root);
TreeNode *buildTreeHelper(const std::vector<int> &preorder,
                          const std::vector<int> &inorder, int preorder_left,
                          int preorder_right, int inorder_left,
                          int inorder_right,
                          std::unordered_map<int, int> &umap);
TreeNode *buildTree(const std::vector<int> &preorder,
                    const std::vector<int> &inorder);
bool hasPathSum(TreeNode *root, int target);
void pathSumHelper(TreeNode *root, int target,
                   std::vector<std::vector<int>> &result,
                   std::vector<int> &path);
std::vector<std::vector<int>> pathSum(TreeNode *root, int target);
int pathSumIIIHelper(TreeNode *root, int target);
int pathSumIII(TreeNode *root, int target);
bool lowestCommonAncestorHelper(TreeNode *root, TreeNode *p, TreeNode *q,
                                TreeNode *&result);
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q);
int maxPathSum(TreeNode *root);
void numIslandsHelper(std::vector<std::vector<char>> &grid, int index,
                      int jndex);
int numIslands(std::vector<std::vector<char>> &grid);
int orangesRotting(std::vector<std::vector<int>> &grid);
bool canFinish(int numCourses, std::vector<std::vector<int>> &prerequisites);

class Trie {
private:
  std::vector<Trie *> children;
  bool isEnd;

  Trie *searchPrefix(std::string prefix) {
    Trie *node = this;
    for (char ch : prefix) {
      ch -= 'a';
      if (node->children[ch] == nullptr) {
        return nullptr;
      }
      node = node->children[ch];
    }
    return node;
  }

public:
  Trie() : children(26), isEnd(false) {}

  void insert(std::string word) {
    Trie *node = this;
    for (char ch : word) {
      ch -= 'a';
      if (node->children[ch] == nullptr) {
        node->children[ch] = new Trie();
      }
      node = node->children[ch];
    }
    node->isEnd = true;
  }

  bool search(std::string word) {
    Trie *node = this->searchPrefix(word);
    return node != nullptr && node->isEnd;
  }

  bool startsWith(std::string prefix) {
    return this->searchPrefix(prefix) != nullptr;
  }
};

void permuteHelper(std::vector<std::vector<int>> &result,
                   std::vector<int> &output, int first, int len);
std::vector<std::vector<int>> permute(std::vector<int> &nums);
void subsetsHelper(int curr, std::vector<int> &nums,
                   std::vector<std::vector<int>> &result,
                   std::vector<int> &tmp);
std::vector<std::vector<int>> subsets(std::vector<int> &nums);
void letterCombinationsHelper(
    std::vector<std::string> &combinations,
    const std::unordered_map<char, std::string> &phonemap,
    const std::string &digits, int index, std::string &combination);
std::vector<std::string> letterCombinations(std::string digits);
void combinationSumHelper(std::vector<int> &candidates, int target,
                          std::vector<std::vector<int>> &result,
                          std::vector<int> &combine, int index);
std::vector<std::vector<int>> combinationSum(std::vector<int> &candidate,
                                             int target);
void generateParenthesisHelper(std::vector<std::string> &result,
                               std::string &curr, int open, int close, int n);
std::vector<std::string> generateParenthesis(int n);
bool existHelper(std::vector<std::vector<char>> &board,
                 std::vector<std::vector<int>> &visited, int index, int jndex,
                 std::string &s, int kndex);
bool exist(std::vector<std::vector<char>> &board, std::string word);

class myqueue {
public:
  myqueue() = default;
  ~myqueue() = default;

  void push(int val) { ll.push(val); }

  int pop() {
    if (!rr.empty()) {
      int val = rr.top();
      rr.pop();
      return val;
    } else {
      while (!ll.empty()) {
        rr.push(ll.top());
        ll.pop();
      }
      int val = rr.top();
      rr.pop();
      return val;
    }
  }

  int top() {
    if (!rr.empty()) {
      return rr.top();
    } else {
      while (!ll.empty()) {
        rr.push(ll.top());
        ll.pop();
      }
      return rr.top();
    }
  }

  bool empty() { return ll.empty() && rr.empty(); }

private:
  std::stack<int> ll;
  std::stack<int> rr;
};

void partitionHelper(const std::string &s, int index);
std::vector<std::vector<std::string>> partition(std::string s);
void solveNQueensHelper(std::vector<std::vector<std::string>> &solutions,
                        std::vector<int> &queens, int n, int row,
                        std::unordered_set<int> &col,
                        std::unordered_set<int> &dia1,
                        std::unordered_set<int> &dia2);
std::vector<std::vector<std::string>> solveNQueens(int n);
std::vector<std::string> generateBoard(std::vector<int> &queens, int n);
int searchInsert(const std::vector<int> &nums, int target);
bool searchMatrix2(const std::vector<std::vector<int>> &matrix, int target);
int lowerBound(const std::vector<int> &nums, int target);
int upperBound(const std::vector<int> &nums, int target);
std::vector<int> searchRange(const std::vector<int> &nums, int target);
int searchRotate(const std::vector<int> &nums, int target);
int findMin(const std::vector<int> &nums);
double findMedianSortedArrays(const std::vector<int> &nums1,
                              const std::vector<int> &nums2);
bool isValid(std::string s);

class MinStack {
public:
  MinStack() {}

  void push(int val) {
    a.push(val);
    if (b.empty() || val <= b.top())
      b.push(val);
  }

  void pop() {
    if (b.top() == a.top())
      b.pop();
    a.pop();
  }

  int top() { return a.top(); }

  int getMin() { return b.top(); }

private:
  std::stack<int> a;
  std::stack<int> b;
};

int getDigits(std::string &src, size_t &ptr);
std::string getString(std::string &src, size_t &ptr);
std::string decodeString(std::string s);
std::vector<int> dailyTemperatures(const std::vector<int> &T);
int largestRectangleArea(const std::vector<int> &heights);
int quickselect(std::vector<int> &nums, int l, int r, int k);
int findKthLargest(std::vector<int> &nums, int k);
static bool cmp(std::pair<int, int> &m, std::pair<int, int> &n);
std::vector<int> topKFrequent(std::vector<int> &nums, int k);

#endif
