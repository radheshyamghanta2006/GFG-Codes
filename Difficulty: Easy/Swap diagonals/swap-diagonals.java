class Solution {
    public void swapDiagonal(int[][] mat) {
        // Code with Radheshyam (.^.)
        int n = mat.length;
        int l=0, r = n-1;
        
        for(int[] row: mat){
            int t=row[l]; 
            row[l] = row[r];
            row[r] = t;
            
            l++;r--;
        }
    }
}