#include "function.hpp"

#include <algorithm>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
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
