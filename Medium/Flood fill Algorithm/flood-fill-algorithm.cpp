//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void dfs(int r, int c, vector<vector<int>> &ans, vector<vector<int>> &image, int iniColor, int newColor){
        ans[r][c] = newColor;
        
        int dr[] = {-1, 0, 0, 1};
        int dc[] = {0, -1, 1, 0};
        
        int n = ans.size(), m = ans[0].size();
        
        for(int k = 0; k < 4; k++){
            int nr = r + dr[k];
            int nc = c + dc[k];
            
            if(nr >= 0 && nr < n && nc >= 0 && nc < m && image[nr][nc] == iniColor && ans[nr][nc] != newColor)
                dfs(nr, nc, ans, image, iniColor, newColor);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int iniColor = image[sr][sc];
        vector<vector<int>> ans = image;
        dfs(sr, sc, ans, image, iniColor, newColor);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends