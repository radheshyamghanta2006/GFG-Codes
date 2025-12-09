class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        vector<int>ans;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int index = abs(arr[i]) - 1;
            
            if(arr[index]<0){
                ans.push_back(abs(arr[i]));
            } else {
                arr[index] = -arr[index];
            }
        }
        
        return ans;
    }
};