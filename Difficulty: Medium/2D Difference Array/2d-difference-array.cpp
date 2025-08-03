class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat,
                                    vector<vector<int>>& opr) {
        // Code with Radheshyam (.^.)
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>arr(n,vector<int>(m,0));
        
        for(auto it:opr){
            int v = it[0];
            int r1 = it[1];
            int c1 = it[2];
            int r2 = it[3];
            int c2 = it[4];
            arr[r1][c1] = arr[r1][c1] + v;
            if(c2+1<m){
                arr[r1][c2+1] = arr[r1][c2+1]-v;
                if(r2+1<n){
                    arr[r2+1][c2+1] = arr[r2+1][c2+1]+v;
                }
            }
            if(r2+1<n){
                arr[r2+1][c1] = arr[r2+1][c1] - v;
            }
        }  
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                arr[i][j] = arr[i][j] + arr[i][j-1];
            }
        }
        for(int j=0;j<m;j++){
            for(int i=1;i<n;i++){
                arr[i][j] = arr[i][j] + arr[i-1][j];
                //arr[i][j]+=mat[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //arr[i][j] = arr[i][j] + arr[i-1][j];
                arr[i][j]+=mat[i][j];
            }
        }
        
        return arr;
    }
};