#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void FindIncluded(const vector<vector<int>>& table, int n, int W, const vector<int>& wt)
{
    int i = n, w = W;
    while (table[i][w] != 0 && i > 0)
    {
        if (table[i][w] == table[i - 1][w])
        {
            i--;
            continue;
        }
        else
        {
            cout << "Item " << i << " is included " << endl;
            w = w - wt[i - 1];
            i--;
        }
    }
}

int down_knapsack(int W, vector<int> wt, vector<int> val, int n)
{
    vector<vector<int>> table(n + 1, vector<int>(W + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                table[i][w] = 0;
            else if (wt[i - 1] <= w)
                table[i][w] = max(val[i - 1] + table[i - 1][w - wt[i - 1]], table[i - 1][w]);
            else
                table[i][w] = table[i - 1][w];
        }
    }
    FindIncluded(table, n, W, wt); // Fixed line
    return table[n][W];
}

int main()
{
    int W = 12;
    const vector<int> wt = {2, 4, 3, 5, 5};
    vector<int> val = {3, 4, 1, 2, 6};
    int n = wt.size();
    cout << "Maximum value in Knapsack = " << down_knapsack(W, wt, val, n) << endl;
    return 0;
}
