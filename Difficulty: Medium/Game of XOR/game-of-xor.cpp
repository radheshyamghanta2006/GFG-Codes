class Solution {
  public:
    int subarrayXor(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        int n=arr.size();
        if(n%2==0) return 0;
        int ans=0;
        for(int i=0;i<n;i+=2)
            ans=ans^arr[i];
        return ans;
        
    }
};