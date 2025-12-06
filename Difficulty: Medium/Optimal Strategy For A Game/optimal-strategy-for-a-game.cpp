class Solution {
  public:
   
  
    int maximumAmount(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int n = arr.size();
        vector<vector<long long>> dp(n, vector<long long>(n, 0));
        
        for(int i = 0;i<n;i++){
            dp[i][i] = arr[i];
        }
        for(int i=0;i+1<n;i++) dp[i][i+1] = max(arr[i],arr[i+1]);
        
        for(int len = 3;len<=n;len++){
            for(int i=0; i+ len - 1 < n;i++){
                int j = i + len -1;
                
                long long tl = arr[i] + min(dp[i+2][j], dp[i+1][j-1]);
                long long tr = arr[j] + min(dp[i+1][j-1], dp[i][j-2]);
                
                dp[i][j] = max(tl,tr);
            }
        }
        return dp[0][n-1];
    }
};