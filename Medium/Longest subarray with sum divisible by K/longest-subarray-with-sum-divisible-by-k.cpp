//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    int sum = 0,m = 0;
	    unordered_map<int,int> mp;
	    for(int i = 0;i<n;i++){
	        sum += arr[i];
	        int rem = sum%k;
	        if(rem<0) rem +=k;
	        if(rem == 0) m = i+1;
	        else{
	            if(mp[rem]) m = max(m,i +1 -mp[rem]);
	            else mp[rem] = i+1;
	    }
	}
	    return m;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends