class Solution {
  public:
    int powerfulInteger(vector<vector<int>>& intervals, int k) {
        // Code with Radheshyam (.^.)
        
        map<int,int>mp;
        for(auto it:intervals){
            mp[it[0]]++;
            mp[it[1]+1]--;
        }
            int ans = -1;
            int count = 0;
            for(auto it:mp){
                if(count>=k && count+it.second<k){
                    ans=it.first-1;
                }
                count+=it.second;
                if(count>=k){
                    ans=it.first;
                }
            }
        return ans;
    }
};