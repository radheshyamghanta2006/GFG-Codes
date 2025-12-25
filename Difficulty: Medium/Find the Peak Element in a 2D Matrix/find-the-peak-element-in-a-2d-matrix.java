class Solution {
    public ArrayList<Integer> findPeakGrid(int[][] mat) {
        // Code with Radheshyam (.^.)
        ArrayList<Integer> res = new ArrayList<>();
        
        int l = 0, r = mat[0].length - 1;
        
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int row = getMaxRow(mat, mid); // changed a -> mat
            
            int left = (mid - 1 < 0) ? Integer.MIN_VALUE : mat[row][mid - 1];
            int right = (mid + 1 >= mat[0].length) ? Integer.MIN_VALUE : mat[row][mid + 1];
            
            if (left <= mat[row][mid] && right <= mat[row][mid]) {
                // Peak found
                res.add(row);
                res.add(mid);
                return res;
            }
            
            if (mat[row][mid] < left) {
                r = mid - 1; // move left
            } else {
                l = mid + 1; // move right
            }
        }
        
        return res; // fallback (won't reach usually)
    }
    
    int getMaxRow(int[][] mat, int col) { // changed param a -> mat
        int row = 0;
        for (int i = 1; i < mat.length; i++) {
            if (mat[i][col] > mat[row][col]) {
                row = i;
            }
        }
        return row;
    }
}
