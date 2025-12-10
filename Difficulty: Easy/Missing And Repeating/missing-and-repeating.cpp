class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        int n = arr.size();
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]>0){
               arr[abs(arr[i])-1] = - arr[abs(arr[i])-1];
            }
            else ans.push_back(abs(arr[i]));
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0) ans.push_back(i+1);
        }
        
        return ans;
    }
};