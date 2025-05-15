# First File : 
  # 0/1 Knapsack Problem (Recursive Solution)

  This repository contains a C++ implementation of the classic **0/1 Knapsack Problem** using a **recursive approach**.
  
  ---
  
  ## Description

  The 0/1 Knapsack Problem is a fundamental problem in combinatorial optimization:
  
  - Given a set of items, each with a weight and a value
  - Determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit (capacity), and the total value is as large as possible.
  - Items cannot be divided (either take the whole item or leave it).
  
  This implementation solves the problem recursively by exploring all possibilities:
  
  - Either include the current item (if it fits)
  - Or exclude it
  
  ---
  
  ## Code overview
  
  - `knapsack_recursive` function takes:
    - `W`: maximum weight capacity
    - `wt[]`: array of weights
    - `val[]`: array of values
    - `n`: number of items
  - Returns the maximum achievable value.
  
  ---

  ## Example
  
  Input:
  ```cpp
  W = 10;
  wt = {2, 2, 6, 4, 5};
  val = {12, 25, 24, 15, 14};
  ```
  Output:
  ```cpp
  Maximum value in Knapsack = 51
  ```
  ---
  ## How to compile and run
  ```cpp
  g++ -o knapsack knapsack.cpp
  ./knapsack
```
# Second File :
  # 🎒 0/1 Knapsack Problem – C++ Implementation

This repository contains a C++ implementation of the classic **0/1 Knapsack Problem** using **Dynamic Programming**. The algorithm computes the maximum total value that can be accommodated in a knapsack of limited weight capacity, given a set of items with individual weights and values.

---

## 📌 Problem Description

You are given:
- A set of `n` items, each with a **weight** and a **value**.
- A **knapsack** with a maximum weight capacity `W`.

Your task is to select a subset of the items to maximize the total value, **without exceeding the weight limit**. Each item can either be **included or excluded** (0/1 property — no fractional items).

---

## 🧠 Approach

This solution uses a **Dynamic Programming (DP)** approach with a 2D DP table.

- **State:** `dp[i][w]` represents the maximum value achieved with the first `i items and total weight capacity `w`.
- **Transition:**
  - If the item’s weight is less than or equal to the current capacity, you choose the max between:
    - Not including the item
    - Including the item and adding its value
  - Otherwise, skip the item.

### 📈 Time Complexity

- **Time:** O(n * W)
- **Space:** O(n * W)

---

## 🛠️ How to Compile and Run

### 🔧 Compile

```bash
g++ -o knapsack knapsack.cpp

