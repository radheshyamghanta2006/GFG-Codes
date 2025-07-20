class Solution {
  public:
  
  int power(int base, int exp){
      int ans=1;
      while(exp>0){
          if(exp&1){
              ans*=base;
          }
          base*=base;
          exp>>=1;
      }
      return ans;
  }
    int countValid(int n, vector<int>& arr) {
        // Code with Radheshyam (.^.)
        bool vis[10] = {};
        for(auto x:arr){
            vis[x]=true;
        }
        int forbidden = 0, first = 0;
        for(int i=0;i<10;i++){
            if(!vis[i]){
                forbidden++;
                if(i!=0){
                    first++;
                }
            }
        }
        int total = 9*power(10,n-1);
        int notAllowed = 0;
        if(n==1){
            notAllowed=first;
        }
        else{
            notAllowed=first*power(forbidden,n-1);
        }
        return total-notAllowed;
    }
};
