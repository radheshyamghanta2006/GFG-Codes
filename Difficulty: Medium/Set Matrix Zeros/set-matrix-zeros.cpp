class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // Code with Radheshyam (.^.)
        int col = mat.size();
        int row = mat[0].size();
        int col0 = 1;
        
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(mat[i][j]==0){
                    // make yhe i-th row
                    mat[i][0] = 0;
                    // make the j-th com
                    if(j != 0)
                    mat[0][j] = 0;
                    else col0 = 0;
                }
            }
        }
        for(int i=1;i<col;i++){
            for(int j=1;j<row;j++){
                if(mat[i][j] != 0){
                    // check row & col
                    if(mat[i][0] == 0 || mat[0][j] == 0){
                        mat[i][j] = 0;
                    }
                }
            }
        }
        if(mat[0][0] == 0){
            for(int j=0;j<row;j++){
                mat[0][j] = 0;
            }
        }
        if(col0 == 0){
            for(int i=0;i<col;i++){
                mat[i][0] = 0;
            }
        }
        //return mat;
    }
};