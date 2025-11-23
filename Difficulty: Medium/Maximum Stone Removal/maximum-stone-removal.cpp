class Solution {
  public:
  
    int maxRemove(vector<vector<int>>& stones) {
        // Code with Radheshyam (.^.)
        int n = stones.size();
        int ans = 0;
        vector<bool>vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,stones,vis);
                ans++;
            }
        }
        return n-ans;
    }
    
    void dfs(int st,vector<vector<int>>& stones,vector<bool>&vis){
        if(!vis[st]){
            vis[st]=true;
            for(int i=0;i<stones.size();i++){
                //row or col match - consider one comp
                if(stones[st][0] == stones[i][0] || stones[st][1] == stones[i][1]){
                    dfs(i,stones,vis);
                }
            }
        }
        return;
    }
};