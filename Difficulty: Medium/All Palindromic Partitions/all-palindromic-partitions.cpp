class Solution {
  public:
  
  //check if s[ab...z] is a pelindrome
  bool isPelindrone(string &s,int l,int r){
      while(l<r){
          if(s[l] != s[r]){
              return false;
          }
          l++;
          r--;
      }
      return true;
  }
  
  //Recursive backtracking 
  void backtrak(int idx,string &s,vector<string> &curr,vector<vector<string>> &result){
      if(idx == s.size()){
          result.push_back(curr);
          return;
      }
      for(int i=idx; i<s.size();i++){
          if(isPelindrone(s,idx,i)){
              curr.push_back(s.substr(idx, i-idx+1));
            backtrak(i+1,s,curr,result);
            curr.pop_back();
          }
      }
  }
  
    vector<vector<string>> palinParts(string &s) {
        // Code with Radheshyam (.^.)
        vector<vector<string>> result;
        vector<string> curr;
        backtrak(0,s,curr,result);
        return result;
        
    }
};