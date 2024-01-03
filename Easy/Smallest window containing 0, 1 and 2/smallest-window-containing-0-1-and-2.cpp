//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        int i = -1, j = -1, k = -1;
        int ans = INT_MAX;
        for(int t = 0; t < s.length(); t++){
            if(s[t] == '0') i = t;
            else if(s[t] == '1') j = t;
            else if(s[t] == '2') k = t;
            
            if(i != -1 && j != -1 && k != -1){
                int maxi = max(i, max(j, k));
                int mini = min(i, min(j, k));
                ans = min(ans, maxi - mini + 1);
            }
        }
        return ans == INT_MAX ? -1 : ans;
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
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends