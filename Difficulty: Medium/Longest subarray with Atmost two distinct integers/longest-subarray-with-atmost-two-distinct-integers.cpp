class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int n = arr.size();
        unordered_map<int,int>mp;
        
        int i=0,j=0,result=0;
        
        while(j<n){
            mp[arr[j]]++;
            
            while(mp.size()>2){
                mp[arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            
            result = max(result, j-i+1);
            j++;
        }
        return result;
    }
};