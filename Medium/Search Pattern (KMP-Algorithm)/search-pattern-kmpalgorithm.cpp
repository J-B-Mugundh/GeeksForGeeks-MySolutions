//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            int first = 0, second = 0;
            vector<int> ans;
            int n = txt.size();
            int m = pat.size();
            for(int i = 0; i <= n - m; i++)
            {
                first = i;
                if(txt[i] == pat[0])
                {
                    string temp = txt.substr(i,m);
                    if(temp == pat)
                    {
                        ans.push_back(i+1);
                    }
                }
            }
            return ans;
            
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends