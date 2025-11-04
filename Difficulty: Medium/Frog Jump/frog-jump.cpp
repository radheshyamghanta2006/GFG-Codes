class Solution {
  public:
  
  int fun(vector<int>& height,int i,vector<int>&dp){
      // Base case
      if(i==0) return 0;
      
      // Recursive case
      if(dp[i]!=-1) return dp[i];
      
      int x = fun(height, i-1,dp) + abs(height[i]-height[i-1]);
      int y = INT_MAX;
      if(i>1){
          y = fun(height, i-2,dp) + abs(height[i]-height[i-2]);
      }
      dp[i]=min(x,y);
      return dp[i];
  }
  
    int minCost(vector<int>& height) {
        // Code with Radheshyam (.^.)
        int n = height.size();
        vector<int>dp(n,-1);
       
        return fun(height, n-1,dp);
        
    }
};