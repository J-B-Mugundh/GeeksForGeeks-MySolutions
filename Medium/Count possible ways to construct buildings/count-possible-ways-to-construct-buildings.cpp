//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	const int MOD = 1000000007;

    int TotalWays(int N) {
        if (N == 1) return 4;
    
        // Initialize the first two numbers in the Fibonacci sequence
        long long a = 1, b = 1;
    
        // Calculate the Fibonacci sequence up to the Nth term
        for (int i = 3; i <= N + 2; ++i) {
            long long temp = (a + b) % MOD;
            a = b;
            b = temp;
        }
    
        // Calculate the total number of ways for both sides of the road
        int total_ways = (b * b) % MOD;
    
        return total_ways;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends