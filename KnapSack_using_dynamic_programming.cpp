#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Function to solve the 0/1 Knapsack problem using dynamic programming
// Time Complexity: O(n * W)
int knapsack(int W, int wt[], int val[], int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= W; w++)
        {
            if (wt[i - 1] <= w)
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - wt[i - 1]] + val[i - 1]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main()
{
    int n, W;
    cout << "Enter the number of items: "; 

    cin >> n;
    cout << "Enter the maximum weight of the knapsack: ";

    cin >> W;  
    int wt[n], val[n];
    cout << "Enter the weights of the items: ";

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout << "Enter the values of the items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    cout << "Maximum value in Knapsack = " << knapsack(W, wt, val, n) << endl;
    return 0;
}