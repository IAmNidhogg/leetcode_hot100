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

void showList(ListNode *head) {
  for (ListNode *tmp = head; tmp != nullptr; tmp = tmp->next) {
    std::cout << tmp->val << ((tmp == nullptr) ? "" : " ");
  }
  std::cout << std::endl;
}

void showRandomList(Node *head) {
  for (Node *tmp = head; tmp != nullptr; tmp = tmp->next) {
    std::cout << tmp->val;
    if (tmp->random != nullptr) {
      std::cout << "(" << tmp->random->val << ")";
    } else {
      std::cout << "(null)";
    }
    if (tmp->next != nullptr) {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
}
