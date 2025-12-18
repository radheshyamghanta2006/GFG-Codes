class Solution {
    public void sortIt(int[] arr) {
        // code here
        
        int n = arr.length;

        for(int i = 0; i < n; i++) {    // making odd numbers negative
            if((arr[i] & 1) == 1) arr[i] *= -1;
        }

        Arrays.sort(arr);

        for(int i = 0; i < n; i++) {    // restoring odd numbers
            if(arr[i] < 0) arr[i] *= -1;
        }
    }
    
}
