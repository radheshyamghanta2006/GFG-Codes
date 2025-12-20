class Solution {
    public int searchInsertK(int arr[], int k) {
        // Code with Radheshyam (.^.)
        int l = 0;
        int r = arr.length-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==k){
                return mid;
            }
            if(arr[mid]>k){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};