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
