//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   // Function to find the number of islands.
    int n,m;
    vector<vector<int>> dir{{1,0},{-1,0},{0,-1},{0,1},{1,1},{-1,-1},{1,-1},{-1,1}};
    void solve(vector<vector<char>>& grid,int i,int j){
        //base case
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='W') return;
        grid[i][j]='W';
        for(auto &it:dir){
            int newi=i+it[0];
            int newj=j+it[1];
            solve(grid,newi,newj);
        }
        
    }
    int countIslands(vector<vector<char>>& grid) {
        // Code with Radheshyam (.^.)
        n=grid.size();
        m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L'){
                    solve(grid,i,j);
                    count++;
                }
            }
        }
        return count;
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.countIslands(grid);
        cout << ans << '\n';

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends