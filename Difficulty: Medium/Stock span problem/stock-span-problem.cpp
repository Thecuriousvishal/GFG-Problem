//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(int price[], int n) {
    // Create a stack to store indices of the days
    stack<int> st;
    
    // Create a vector to store the span for each day
    vector<int> span(n);
    
    // Span for the first day is always 1
    span[0] = 1;
    st.push(0); // Push the index of the first day
    
    // Calculate span for the rest of the days
    for (int i = 1; i < n; i++) {
        // Pop elements from stack while stack is not empty and
        // the price at the top of the stack is less than or equal to current price
        while (!st.empty() && price[st.top()] <= price[i]) {
            st.pop();
        }
        
        // If stack becomes empty, then price[i] is greater than all previous prices
        // Otherwise, price[i] is greater than prices till the day of index st.top()
        span[i] = (st.empty()) ? (i + 1) : (i - st.top());
        
        // Push the current day index onto the stack
        st.push(i);
    }
    
    return span; // Return the span vector
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends