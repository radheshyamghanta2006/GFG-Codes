class Solution {
  public:
    bool wildCard(string &txt, string &pat) {
        // Code with Radheshyam (.^.)
        
        int n = pat.size();
        int m = txt.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return helper(n,m,pat,txt,dp);
        
    }
    
    bool helper(int i,int j,string pat, string txt,vector<vector<int>> &dp){
        
        //1 both empty
        if(i == 0 && j == 0) return true;
        //2 pat empty but txt is not
        if(i == 0 && j > 0) return false;
        //3 txt empty but pat is not
        if(j == 0){
            for(int k=1;k<=i;k++){
                if(pat[k-1] != '*') return false;
            }
            return true;
        }
        if(dp[i][j]!=-1) return dp[i][j] == 1? true:false;
        //4 both present (code for ? , *)
        char p = pat[i-1];
        char t = txt[j-1];
        
        bool res;
        if(p==t || p=='?'){
            res = helper(i-1,j-1,pat,txt,dp);
        }
        
        else if(p=='*'){
            res = helper(i-1,j,pat,txt,dp) || helper(i,j-1,pat,txt,dp);
        }
        else res = false;
        dp[i][j] = (res==true) ? 1:0;
        return res;
    }
};