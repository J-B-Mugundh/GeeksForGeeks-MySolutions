//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        unordered_map<int, int> preSum;
        int sum = 0, maxLen = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum == k)
                maxLen = i + 1;
            if(preSum.find(sum - k) != preSum.end()){
                maxLen = max(maxLen, i - preSum[sum - k]);
            }
            // edge case [2, 0, 0, 0, 3]. 
            // If a sum is already there, don't update it's value since we need the longest subarray
            
            if(preSum.find(sum) == preSum.end())
                preSum[sum] = i;
        }
        return maxLen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends