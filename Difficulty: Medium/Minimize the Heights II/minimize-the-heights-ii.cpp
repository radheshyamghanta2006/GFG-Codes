class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // Code with Radheshyam (.^.)
        
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int longest=arr[n-1];
        int sortest = arr[0];
        int ans = longest-sortest;
        
        for(int i=0;i<n;i++){
            longest = max(arr[n-1]-k,arr[i-1]+k);
            sortest = min(arr[0]+k,arr[i]-k);
            if(sortest<0) continue; 
            ans = min(ans,longest-sortest);
        }
        return ans;
    }
};