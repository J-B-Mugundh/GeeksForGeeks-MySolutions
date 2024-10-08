//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int node, int parent, vector<int> adj[], int vis[]){
        vis[node] = 1;
        for(int adjNode : adj[node]){
            if(!vis[adjNode]){
                if(dfs(adjNode, node, adj, vis)) return true;
            }
            else if(adjNode != parent) return true;
        }
        return false;
    }
    bool isCycle(int n, vector<int> adj[]) {
        int vis[n] = {0};
        
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                if(dfs(i, -1, adj, vis)) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends