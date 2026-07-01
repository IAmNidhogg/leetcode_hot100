#include "function.hpp"

#include <algorithm>
#include <climits>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

// function
// 两数之和
std::vector<std::vector<int>> twoSum(const std::vector<int> &nums, int target) {
  std::vector<std::vector<int>> results;
  for (int index = 0; index < nums.size() - 1; ++index) {
    for (int jndex = index + 1; jndex < nums.size(); ++jndex) {
      if (nums[index] + nums[jndex] == target) {
        results.push_back({index, jndex});
      }
    }
  }
  return results;
}

// 字母异位词分组
std::vector<std::vector<std::string>>
groupAnagrams(const std::vector<std::string> &strs) {
  std::unordered_map<std::string, std::vector<std::string>> mp;
  std::vector<std::vector<std::string>> results;
  for (const std::string &str : strs) {
    std::string key = str;
    std::sort(key.begin(), key.end());
    mp[key].emplace_back(str);
  }

  for (auto it = mp.begin(); it != mp.end(); ++it) {
    results.emplace_back(it->second);
  }
  return results;
}

// 最长连续序列
int longestConsecutive(const std::vector<int> &nums) {
  std::unordered_set<int> se;
  int result = 0;
  for (int index = 0; index < nums.size(); ++index) {
    se.insert(nums[index]);
  }

  for (const int &num : se) {
    if (!se.count(num - 1)) {
      int curr = num;
      int length = 1;

      while (se.count(curr + 1)) {
        ++curr;
        ++length;
      }

      result = std::max(result, length);
    }
  }
  return result;
}

// 移动0
void moveZeroes(std::vector<int> &nums) {
  int curr = 0;
  for (int index = 0; index < nums.size(); ++index) {
    if (nums[index] != 0) {
      nums[curr] = nums[index];
      ++curr;
    }
  }
  for (int index = curr; index < nums.size(); ++index) {
    nums[index] = 0;
  }
}

// 盛水最多的容器
int maxArea(const std::vector<int> &height) {
  int left = 0;
  int right = height.size() - 1;
  int result = 0;

  while (left < right) {
    int tmp_area = (right - left) * std::min(height[left], height[right]);
    result = std::max(result, tmp_area);

    if (height[left] <= height[right]) {
      ++left;
    } else {
      --right;
    }
  }

  return result;
}

// 三数之和
std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
  std::vector<std::vector<int>> results;

  if (nums.size() < 3 || nums[0] > 0) {
    return results;
  }
  std::sort(nums.begin(), nums.end());

  for (int index = 0; index < nums.size() - 2; ++index) {
    if (index > 0 && nums[index] == nums[index - 1]) {
      continue;
    }

    int target = 0 - nums[index];
    int left = index + 1;
    int right = nums.size() - 1;
    while (left < right) {
      if (nums[left] + nums[right] == target) {
        results.push_back({nums[index], nums[left], nums[right]});
        while (left < right && nums[left] == nums[left + 1]) {
          ++left;
        }
        while (left < right && nums[right] == nums[right - 1]) {
          --right;
        }
        ++left;
        --right;
      } else if (nums[left] + nums[right] > target) {
        --right;
      } else {
        ++left;
      }
    }
  }
  return results;
}

// 接雨水
int trap(const std::vector<int> &height) {
  std::stack<int> stk;
  int water = 0;
  if (height.size() < 3) {
    return 0;
  }

  for (int index = 0; index < height.size(); ++index) {
    while (!stk.empty() && height[index] > height[stk.top()]) {
      int popnum = stk.top();
      stk.pop();
      while (!stk.empty() && height[popnum] == height[stk.top()]) {
        stk.pop();
      }

      if (!stk.empty()) {
        int tmp = height[stk.top()];
        int hig =
            std::min(tmp - height[popnum], height[index] - height[popnum]);
        int wid = index - stk.top() - 1;
        water += hig * wid;
      }
    }
    stk.push(index);
  }
  return water;
}

// 无重复字符的最长字串
int lengthOfLongestSubstring(const std::string &s) {
  std::unordered_set<int> st;
  int length = 0;
  int left = 0;

  for (int index = 0; index < s.size(); ++index) {
    while (!st.empty() && st.find(s[index]) != st.end()) {
      st.erase(s[left]);
      ++left;
    }
    st.insert(s[index]);
    length = std::max(length, index - left + 1);
  }
  return length;
}

// 找到字符串中所有字母异位词
std::vector<int> findAnagrams(const std::string &s, const std::string &p) {
  std::set<char> ss, ps;
  std::vector<int> result;
  if (s.size() < p.size())
    return result;

  for (int index = 0; index < p.size(); ++index) {
    ps.insert(p[index]);
  }
  for (int index = 0; index < s.size() - p.size() + 1; ++index) {
    for (int jndex = 0; jndex < p.size(); ++jndex) {
      ss.insert(s[index + jndex]);
    }
    if (ss == ps) {
      result.push_back(index);
    }
    ss.clear();
  }
  return result;
}

// 和为target的字数组
int subarraySum(const std::vector<int> &nums, int target) {
  std::unordered_map<int, int> mp;
  mp[0] = 1;
  int pre = 0;
  int count = 0;

  for (const int &x : nums) {
    pre += x;
    if (mp.find(pre - target) != mp.end()) {
      count += mp[pre - target];
    }
    ++mp[pre];
  }
  return count;
}

// 滑动窗口最大值
std::vector<int> maxSlidingWindow(const std::vector<int> &nums, int k) {
  std::priority_queue<std::pair<int, int>> pq;
  std::vector<int> result;
  for (int index = 0; index < k; ++index) {
    pq.emplace(nums[index], index);
  }

  result.push_back(pq.top().first);
  for (int index = k; index < nums.size(); ++index) {
    pq.emplace(nums[index], index);
    while (pq.top().second <= index - k) {
      pq.pop();
    }
    result.push_back(pq.top().first);
  }
  return result;
}

// 最小覆盖子串
bool minWindow_check(std::unordered_map<char, int> &sm,
                     std::unordered_map<char, int> &tm) {
  for (const auto &ch : tm) {
    if (sm[ch.first] < ch.second) {
      return false;
    }
  }
  return true;
}

std::string minWindow(std::string s, std::string t) {
  std::unordered_map<char, int> sm;
  std::unordered_map<char, int> tm;
  for (const auto &ch : t) {
    ++tm[ch];
  }

  int left = 0, right = -1;
  int len = INT_MAX, r_left = -1, r_right = -1;

  while (right < int(s.size())) {
    if (tm.find(s[++right]) != tm.end()) {
      ++sm[s[right]];
    }
    while (minWindow_check(sm, tm) && left <= right) {
      if (right - left + 1 < len) {
        len = right - left + 1;
        r_left = left;
      }
      if (tm.find(s[left]) != tm.end()) {
        --sm[s[left]];
      }
      ++left;
    }
  }
  return r_left == -1 ? std::string() : s.substr(r_left, len);
}

// 最大子数组和
int maxSubArray(const std::vector<int> &nums) {
  int pre = 0;
  int result = nums[0];
  for (const auto &x : nums) {
    pre = std::max(pre + x, x);
    result = std::max(result, pre);
  }
  return result;
}

// 合并区间
std::vector<std::vector<int>> merge(std::vector<std::vector<int>> &intervals) {
  if (intervals.size() == 0) {
    return {};
  }

  std::vector<std::vector<int>> sorted = intervals;
  std::sort(sorted.begin(), sorted.end());
  std::vector<std::vector<int>> merged;
  for (int index = 0; index < sorted.size(); ++index) {
    if (merged.size() == 0 || sorted[index][0] > merged.back()[1]) {
      merged.push_back(sorted[index]);
    } else {
      merged.back()[1] = std::max(sorted[index][1], merged.back()[1]);
    }
  }
  return merged;
}

// 轮转数组
void rotate(std::vector<int> &nums, int k) {
  std::vector<int> tmpnums(nums.size());
  for (int index = 0; index < nums.size(); ++index) {
    tmpnums[(index + k) % nums.size()] = nums[index];
  }
  nums.assign(tmpnums.begin(), tmpnums.end());
}

// 除了自身以外数组的乘积
std::vector<int> productExceptSelf(const std::vector<int> &nums) {
  std::vector<int> result(nums.size(), 1);
  int left = 0, right = nums.size() - 1;
  int lp = 1, rp = 1;
  while (left < nums.size() && right >= 0) {
    result[left] *= lp;
    result[right] *= rp;
    lp *= nums[left++];
    rp *= nums[right--];
  }
  return result;
}

// 缺失的第一个正数
int firstMissingPositive(std::vector<int> &nums) {
  std::sort(nums.begin(), nums.end());
  int num = 1;
  for (int index = 0; index < nums.size(); ++index) {
    if (nums[index] <= 0) {
      continue;
    }
    if (nums[index] == num) {
      ++num;
      continue;
    } else if (index > 0 && nums[index] == nums[index - 1]) {
      continue;
    } else {
      return num;
    }
  }
  return num;
}

// 矩阵置零
void setZeroes(std::vector<std::vector<int>> &matrix) {
  std::vector<bool> row(matrix.size());
  std::vector<bool> col(matrix[0].size());

  for (int index = 0; index < matrix.size(); ++index) {
    for (int jndex = 0; jndex < matrix[0].size(); ++jndex) {
      if (matrix[index][jndex] == 0) {
        row[index] = col[jndex] = true;
      }
    }
  }
  for (int index = 0; index < matrix.size(); ++index) {
    for (int jndex = 0; jndex < matrix[0].size(); ++jndex) {
      if (row[index] || col[jndex]) {
        matrix[index][jndex] = 0;
      }
    }
  }
}

// 螺旋矩阵
std::vector<int> spiralOrder(const std::vector<std::vector<int>> &matrix) {
  std::vector<int> result;
  int rows = matrix.size();
  int cols = matrix[0].size();
  int left = 0;
  int right = cols - 1;
  int top = 0;
  int bottom = rows - 1;

  while (1) {
    for (int index = left; index <= right; ++index) {
      result.push_back(matrix[top][index]);
    }
    ++top;
    if (top > bottom)
      break;

    for (int index = top; index <= bottom; ++index) {
      result.push_back(matrix[index][right]);
    }
    --right;
    if (left > right)
      break;

    for (int index = right; index >= left; --index) {
      result.push_back(matrix[bottom][index]);
    }
    --bottom;
    if (top > bottom)
      break;

    for (int index = bottom; index >= top; --index) {
      result.push_back(matrix[index][left]);
    }
    ++left;
    if (left > right)
      break;
  }
  return result;
}

// 跳跃游戏
bool canJump(const std::vector<int> &nums) {
  int rightmost = 0;
  for (int index = 0; index < nums.size(); ++index) {
    if (index <= rightmost) {
      rightmost = std::max(rightmost, index + nums[index]);
      if (rightmost >= nums.size() - 1) {
        return true;
      }
    }
  }
  return false;
}

// 旋转图像
void rotatePic(std::vector<std::vector<int>> &matrix) {
  for (int index = 0; index < matrix.size() / 2; ++index) {
    for (int jndex = 0; jndex < matrix.size(); ++jndex) {
      std::swap(matrix[index][jndex], matrix[matrix.size() - index - 1][jndex]);
    }
  }
  for (int index = 0; index < matrix.size(); ++index) {
    for (int jndex = 0; jndex < index; ++jndex) {
      std::swap(matrix[index][jndex], matrix[jndex][index]);
    }
  }
}

// 搜索二维矩阵
bool searchMatrix(const std::vector<std::vector<int>> &matrix, int target) {
  for (const auto &row : matrix) {
    for (int ele : row) {
      if (ele == target) {
        return true;
      }
    }
  }
  return false;
}
