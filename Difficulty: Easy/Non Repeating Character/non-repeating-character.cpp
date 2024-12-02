//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
       int freq[26] = {0}; // Array to store the frequency of each letter

        // Count the frequency of each character
        for (int i = 0; s[i] != '\0'; i++) {
            freq[s[i] - 'a']++; // Increment frequency of the character
        }
    
        // Find the first non-repeating character
        for (int i = 0; s[i] != '\0'; i++) {
            if (freq[s[i] - 'a'] == 1) {
                return s[i];
            }
        }
        return '$';
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends