#include "helper.hpp"

#include <iostream>
#include <string>
#include <vector>

// helper function
void showVector(const std::vector<int> &nums) {
  for (int index = 0; index < nums.size(); ++index) {
    std::cout << nums[index] << ((index == nums.size() - 1) ? "" : " ");
  }
  std::cout << std::endl;
}

void show2dVector(const std::vector<std::vector<int>> &nums) {
  for (int index = 0; index < nums.size(); ++index) {
    for (int jndex = 0; jndex < nums[index].size(); ++jndex) {
      std::cout << nums[index][jndex]
                << ((jndex == nums[index].size() - 1) ? "" : " ");
    }
    std::cout << std::endl;
  }
}

void showStringVector(const std::vector<std::string> &strs) {
  for (int index = 0; index < strs.size(); ++index) {
    std::cout << strs[index] << ((index == strs.size() - 1) ? "" : " ");
  }
  std::cout << std::endl;
}

void show2dStringVector(const std::vector<std::vector<std::string>> &strs) {
  for (int index = 0; index < strs.size(); ++index) {
    for (int jndex = 0; jndex < strs[index].size(); ++jndex) {
      std::cout << strs[index][jndex]
                << ((jndex == strs[index].size() - 1) ? "" : " ");
    }
    std::cout << std::endl;
  }
}
