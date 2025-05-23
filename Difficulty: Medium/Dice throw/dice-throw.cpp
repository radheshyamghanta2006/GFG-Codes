class Solution {
  public:
  
  int dp[51][51];
  
  int solve(int m, int n, int x){
      //base case
      if(x < 0) return 0;
      
      if(dp[n][x] != -1) return dp[n][x];
      
      if(n == 0 && x == 0) return 1;
      
      if(n == 0) return 0;
      //recursive case
      int wayes=0;
      
      for(int i=1;i<=m;i++){
         
          wayes += solve(m, n-1, x-i);
          
      }
      return dp[n][x] = wayes;
  }
  
    int noOfWays(int m, int n, int x) {
        // Code with Radheshyam (.^.)
        
        memset(dp, -1, sizeof(dp));
        return solve(m, n, x);
        
    }
};