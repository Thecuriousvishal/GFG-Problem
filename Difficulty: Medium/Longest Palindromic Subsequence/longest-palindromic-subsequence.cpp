//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int longestPalinSubseq(string &s)
    {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Base case: Single character palindromes
        for (int i = 0; i < n; i++)
            dp[i][i] = 1;
    
        // Fill the table for substrings of length 2 to n
        for (int len = 2; len <= n; len++) 
        {
            for (int i = 0; i <= n - len; i++) 
            {
                int j = i + len - 1;
                if(s[i] == s[j]) 
                {
                    dp[i][j] = 2 + dp[i+1][j-1];
                }else 
                {
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends