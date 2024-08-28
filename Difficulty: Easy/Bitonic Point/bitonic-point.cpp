//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) 
	{
	    int s = 0;
        int e = n;
        
        if(n==1){
            return arr[0];
        }
        else if(arr[0]>arr[1]){
            return arr[0];
        }
        else if(arr[n-1]>arr[n-2]){
            return arr[n-1];
        }
    
        while (s <= e) 
        {
            int mid = s + (e - s) / 2;
    
            // Check if mid is the maximum element
            if ((arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]))
            {
                return arr[mid];
            }
            else if (arr[mid] < arr[mid + 1]) {
                s = mid - 1;
            }
            else {
                e = mid + 1;
            }
           
        }
         return -1;
	}
        
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends