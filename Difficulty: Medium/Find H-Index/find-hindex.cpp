class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // Code with Radheshyam (.^.)
        
        sort(citations.begin(), citations.end());
        int ans=0;
        int n=citations.size();
        for(int i=0;i<n;i++){
            int num= n-i;
            ans=max(ans, min(num, citations[i]));
        }
        return ans;
    }
};