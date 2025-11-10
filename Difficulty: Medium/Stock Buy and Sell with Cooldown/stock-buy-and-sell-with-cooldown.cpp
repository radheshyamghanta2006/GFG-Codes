class Solution {
    int n;
    vector<int>arr;
    
  public:
  int helper(vector<vector<int>> &dp,int i,int buy){
      if(i>=n) return 0;
      int profit = 0;
      
      if(dp[i][buy] != -1) return dp[i][buy];
      
      if(buy == 1){
        profit = max(-arr[i] + helper(dp,i+1,0), helper(dp,i+1,1));  
      }
      else{
          profit = max(+arr[i] + helper(dp,i+2,1), helper(dp,i+1,0));  
      }
      return dp[i][buy] = profit;
  }
  
    int maxProfit(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        
        n = arr.size();
        this->arr = arr;
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));

        return helper(dp,0,1);
    }
};