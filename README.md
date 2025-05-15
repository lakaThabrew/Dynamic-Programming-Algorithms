# First File - KnapSack_resursive : 
  ## 0/1 Knapsack Problem (Recursive Solution)

  - This repository contains a C++ implementation of the classic **0/1 Knapsack Problem** using a **recursive approach**.
  ---
  
  ### Description

  The 0/1 Knapsack Problem is fundamental in combinatorial optimization:
  
  - Given a set of items, each with a weight and a value
  - Determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit (capacity), and the total value is as large as possible.
  - Items cannot be divided (either take the whole item or leave it).
  
  This implementation solves the problem recursively by exploring all possibilities:
  
  - Either include the current item (if it fits)
  - Or exclude it
  
  ---
# Second File - Knapsack_using_dynamic_programming:
  ## 🎒 0/1 Knapsack Problem – C++ Implementation

This repository contains a C++ implementation of the classic **0/1 Knapsack Problem** using **Dynamic Programming**. The algorithm computes the maximum total value that can be accommodated in a knapsack of limited weight capacity, given a set of items with individual weights and values.

---

### 📌 Description

You are given:
- A set of `n` items, each with a **weight** and a **value**.
- A **knapsack** with a maximum weight capacity `W`.

Your task is to select a subset of the items to maximize the total value, **without exceeding the weight limit**. Each item can either be **included or excluded** (0/1 property — no fractional items).

---

### 🧠 Approach

This solution uses a **Dynamic Programming (DP)** approach with a 2D DP table.

- **State:** `dp[i][w]` represents the maximum value achieved with the first `i items and total weight capacity `w`.
- **Transition:**
  - If the item’s weight is less than or equal to the current capacity, you choose the max between:
    - Not including the item
    - Including the item and adding its value
  - Otherwise, skip the item.
    
# Third File - Knapsack_down:
  ## 0/1 Knapsack Problem using Dynamic Programming

This project implements the classic **0/1 Knapsack problem** using a bottom-up dynamic programming approach in C++. It also tracks and displays the items included in the optimal solution.

### 🧠 Problem Statement

Given weights and values of `n` items, put these items in a knapsack of capacity `W` to get the maximum total value in the knapsack. However, you cannot break an item — either pick the complete item or don't pick it (0/1 property).
---
### 📁 Files

- `knapsack.cpp`: Main source file containing the implementation of the 0/1 Knapsack algorithm and the logic to print the items included in the final solution.
---
### 🔧 How It Works

1. A 2D DP table is created where `table[i][w]` represents the maximum value achievable using the first `i` items and capacity `w`.
2. The table is filled using the recurrence relation:

# Fourth File - fractional_Knapsack:
  ## 🧮 Fractional Knapsack Problem in C++

This project provides an implementation of the **Fractional Knapsack Problem** using a greedy algorithm in C++. Unlike the 0/1 Knapsack, this version allows items to be broken into smaller parts, enabling optimal filling of the knapsack.

---

### 🧠 Problem Statement

Given `n` items with certain values and weights, and a knapsack with a maximum capacity, determine the maximum value that can be obtained by placing items into the knapsack. **You can include fractional parts of items.**.
---

### 📁 Files

- `fractional_knapsack.cpp`: Source file with a full implementation of the fractional knapsack algorithm.
---

### ⚙️ How It Works

1. Each item’s **value-to-weight ratio** is computed.
2. Items are sorted in **descending order** of this ratio.
3. The algorithm picks items with the **highest ratio** first:
   - If the item fits entirely, it's added.
   - If not, a **fraction** of the item is taken to fill the remaining capacity.

---



