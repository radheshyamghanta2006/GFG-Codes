class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        int mx=0;
        int ans=0;
        for(auto it:arr)
        {
            if(it>=mx)
            {
                ans++;
            }
            mx=max(mx,it);
        }
        return ans;
    }
};