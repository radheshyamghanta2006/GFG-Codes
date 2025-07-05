class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans=max(ans,arr[i]+arr[i-1]);
        }
        return ans;
    }
};