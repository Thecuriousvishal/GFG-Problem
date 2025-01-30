//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long towerOfHanoi(int n, int from, int to, int aux) {
        if(n==0) return 0;
        
        long long moves=0;
        moves+=towerOfHanoi(n-1, from, aux, to);
        moves++;
        moves+=towerOfHanoi(n-1,aux, to, from);
        
        return moves;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.towerOfHanoi(N, 1, 3, 2) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends