class Solution {
  public:
  vector<string> keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  vector<string> ans;
  
  void helper(vector<int> arr,int n,string temp,int i){
      if(i == n){
          ans.push_back(temp);
          return;
      }
      int digit = arr[i];
      if (digit == 0 || digit == 1) {
          // skip these digits
          helper(arr, n, temp, i+1);
          return;
      }
      for(int j=0;j<keys[arr[i]].size();j++){
          helper(arr,n,temp + keys[arr[i]][j],i+1);
      }
      
  }
  
    vector<string> possibleWords(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        ans.clear();
        int n = arr.size();
        helper(arr,n,"",0);
        return ans;
    }
};