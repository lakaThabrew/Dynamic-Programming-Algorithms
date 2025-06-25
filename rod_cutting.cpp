#include <iostream>
#include <vector>
using namespace std;

// Function to solve the Rod Cutting problem and trace the cuts
void rodCutting(vector<int>& price, int n) {
    vector<int> dp(n + 1, 0);      // dp[i] = max profit for rod length i
    vector<int> cuts(n + 1, 0);    // To store the best cut at length i

    // Build dp[] and cuts[] bottom-up
    for (int i = 1; i <= n; ++i) {
        int max_val = -1;
        for (int j = 1; j <= i; ++j) {
            if (max_val < price[j - 1] + dp[i - j]) {
                max_val = price[j - 1] + dp[i - j];
                cuts[i] = j;  // store best cut length at i
            }
        }
        dp[i] = max_val;
    }

    // Print dp table
    cout << "DP Table:\n";
    for (int i = 0; i <= n; ++i) {
        cout << "dp[" << i << "] = " << dp[i] << endl;
    }

    // Maximum profit
    cout << "\nMaximum Obtainable Value: " << dp[n] << endl;

    // Trace back cuts
    cout << "Cuts used: ";
    int length = n;
    while (length > 0) {
        cout << cuts[length] << " ";
        length -= cuts[length];
    }
    cout << endl;
}

int main() {
    vector<int> price = { 1, 2, 1, 5, 2};  // Price for lengths 1 to 4
    int n = price.size();             // Rod length

    rodCutting(price, n);

    return 0;
}
