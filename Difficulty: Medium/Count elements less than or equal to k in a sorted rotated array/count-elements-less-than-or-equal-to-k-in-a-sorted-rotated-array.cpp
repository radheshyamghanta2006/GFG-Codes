class Solution {
    public:
    int count(vector<int>&arr,int start,int end,int x){
        int start1 = start;
        int ans = start1 - 1;
        while(start <= end){
            int mid = (start+end)/2;
            if(arr[mid] <= x){
                ans=mid;
                start=mid+1;
            }
            else end=mid-1;
        }
        return ans-start1+1;
    }
    
    int countLessEqual(vector<int>& arr, int x) {
        // Code with Radheshyam (.^.)
        int start=0;
        int end=arr.size()-1;
        int ans=0;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[start]<=arr[mid]){
                ans+=count(arr,start,mid,x);
                start=mid+1;
            }
            else
            {
                ans+=count(arr,mid,end,x);
                end=mid-1;
            }
        }
        return ans;
    }
};