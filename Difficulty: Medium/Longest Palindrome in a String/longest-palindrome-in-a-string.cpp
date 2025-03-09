//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    string expandAroundCenter(string s, int left, int right) 
    {
        while (left >= 0 && right < s.length() && s[left] == s[right]) 
        {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
    
    string longestPalindrome(string &s) 
    {
        if (s.empty()) return "";
        
        string longest = "";
        for (int i = 0; i < s.length(); i++) 
        {
            string odd = expandAroundCenter(s, i, i);
            string even = expandAroundCenter(s, i, i + 1);
            
            if (odd.length() > longest.length()) longest = odd;
            if (even.length() > longest.length()) longest = even;
        }
        return longest;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends