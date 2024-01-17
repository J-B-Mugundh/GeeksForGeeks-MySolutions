//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void generatePermutations(vector<int>& arr, int start, vector<vector<int>>& result) {
        if (start == arr.size() - 1) {
            result.push_back(arr);
            return;
        }
    
        for (int i = start; i < arr.size(); ++i) {
            swap(arr[start], arr[i]);
            generatePermutations(arr, start + 1, result);
            swap(arr[start], arr[i]); 
        }
    }

    vector<vector<int>> uniquePerms(vector<int>& arr, int n) {
        vector<vector<int>> result;
        generatePermutations(arr, 0, result);
    
        sort(result.begin(), result.end());
    
        result.erase(unique(result.begin(), result.end()), result.end());
    
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends