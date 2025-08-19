class Solution {
    public ArrayList<Integer> farMin(int[] arr) {
        // Code with Radheshyam (.^.)
        int n = arr.length;
        ArrayList<Integer>  ans = new ArrayList<Integer>();
        for(int i=0; i<n ;i++)
        ans.add(-1);
        
        
        //min track array
        int min[] = new int[n];
        min[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--){
            min[i] = Math.min(arr[i], min[i+1]);
        }
        //nlogn
         for(int i=0; i<n ;i++){
             int l=i+1, h=n-1, res=-1;
             
             while(l<=h){
                 int mid = (l+h)/2;
                 if(min[mid] < arr[i]){
                     res = mid;
                     l=mid+1;
                 }
                 else{
                     h=mid-1;
                 }
                 
             }
             ans.set(i,res);
             
         }
         return ans;
        
    }
}