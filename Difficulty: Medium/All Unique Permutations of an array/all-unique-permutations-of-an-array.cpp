class Solution {
  public:
  void help(vector<int> arr,int n,vector<vector<int>> &ans,map<vector<int>,int> &mm,int index){
        if(index==n){
            if(!mm[arr]){
                ans.push_back(arr);
                mm[arr]=1;
            }
            return;
        }
        for(int i=index;i<n;i++){
            swap(arr[i],arr[index]);
            help(arr,n,ans,mm,index+1);
            swap(arr[i],arr[index]);
        }
        
    }
  
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // Code with Radhesdhyam (.^.)
        int n = arr.size();
        vector<vector<int>> ans;
        map<vector<int>,int> mm;
        help(arr,n,ans,mm,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};