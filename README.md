# LeetCode Hot100

用 C++ 实现 LeetCode Hot100 常见题目的练习仓库。算法实现、辅助打印函数与测例集中在同一工程中，通过 CMake 编译运行。

要求：**CMake ≥ 3.10**，**C++17**。

## 项目结构

```text
leetcode_hot100/
├── CMakeLists.txt   # CMake 构建配置
├── main.cpp         # 各题测例入口
├── function.hpp     # 算法声明、链表节点与 LRUCache 等
├── function.cpp     # 算法实现
├── helper.hpp       # 辅助打印函数声明
├── helper.cpp       # 辅助打印函数实现
├── .gitignore
└── README.md
```

## 运行方式

```bash
cmake -B build
cmake --build build
./build/leetcode_hot100
```
