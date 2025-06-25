#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapsack_recursive(int W, int wt[], int val[], int n)
{
    // Base case: no items left or no capacity left
    if (n == 0 || W == 0)
        return 0;

    // If the weight of the nth item is more than the capacity W, skip it
    if (wt[n-1] > W)
        return knapsack_recursive(W, wt, val, n - 1);

    // Return the maximum of two cases:
    // 1. nth item included
    // 2. not included
    else
        return max(val[n - 1] + knapsack_recursive(W - wt[n - 1], wt, val, n - 1), knapsack_recursive(W, wt, val, n - 1));
}

int main()
{
    int W = 10; // Maximum weight capacity of the knapsack
    int wt[] = {1, 5, 8, 1, 7}; // Weights of the items    
    int val[] = {12, 25, 24, 15, 14}; // Values of the items
    int n = sizeof(val) / sizeof(val[0]); // Number of items
    cout << "Maximum value in Knapsack = " << knapsack_recursive(W, wt, val, n) << endl;
    return 0;
}

