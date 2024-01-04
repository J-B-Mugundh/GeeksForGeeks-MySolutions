//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        sort(arr, arr + N);
        for(int i = 0; i <= N - 2; i++){
            if(arr[i] != arr[i + 1] && arr[i + 1] != arr[i + 2])
                return arr[i + 1];
        }
        if(arr[0] != arr[1]) return arr[0];
        return arr[N - 1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends