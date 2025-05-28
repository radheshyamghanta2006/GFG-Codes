class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // Code with Radheshyam (.^.)
        int r = mat.size();
        int c = mat[0].size();
        
        unordered_set<string> st;
        
        for(int i = 0; i < r;i++){
            vector<int> cols;
            
            for(int j = 0; j < c; j++){
                if(mat[i][j] == 1){
                    cols.push_back(j);
                }
            }
            // valide pairs
            for(int x = 0; x < cols.size(); x++){
                
                for(int y = x + 1; y < cols.size(); y++){
                    
                    string validp = to_string(cols[x]) + "_" + to_string(cols[y]);
                    
                    if(st.count(validp)){
                        return true;
                    }
                    st.insert(validp);
                }
            }
        }
        return false;
    }
};