class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // Code with Radheshyam (.^.)
        
        int n=mat.size();
        int m = mat[0].size();
        long long  l=0;
        long long  r=m*n-1;
        
        while(l<=r){
            long long  mid = (l+r)/2;
            long long  row = mid/m;
            long long  col = mid%m;
            long long  val = mat[row][col];
            if(val==x){
                return true;
            }
             long long  lowVal = mat[l/m][l%m];
             long long  highVal = mat[r/m][r%m];
             
             if(lowVal <= val){
                if(lowVal <= x && x < val) r=mid-1;
                else l = mid +1;
             }
             else {
                 if(val < x && x <= highVal) l = mid + 1;
                 else r = mid - 1;
             }
        }
        return false;
    }
};
    