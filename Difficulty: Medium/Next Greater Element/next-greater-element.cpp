//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    #include <vector>

    vector<long long> nextLargerElement(vector<long long> arr, int n) {
    stack<long long> s;
    vector<long long> result(n);

    // Iterate from the end of the array to the beginning
    for (int i = n - 1; i >= 0; i--) {
        // While stack is not empty and top of stack is less than or equal to arr[i]
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        // If stack is empty, no greater element exists
        if (s.empty()) {
            result[i] = -1;
        } else {
            // Top of stack is the next greater element
            result[i] = s.top();
        }

        // Push the current element onto the stack
        s.push(arr[i]);
    }

    return result;
}

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends