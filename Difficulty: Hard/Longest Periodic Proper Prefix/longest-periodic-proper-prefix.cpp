class Solution {
  public:
    int getLongestPrefix(string &s) {
        // Code with Radheshyam (.^.)
        int n = s.size();
        int len = n-1;
        
        while(len){
            int sPtr = len;
            int i = 0;
            
            while(sPtr<n){
                if(s[sPtr] == s[i]){
                    i++;
                    sPtr++;
                }
                else{
                    break;
                }
            }
            
            if(sPtr==n)
              return len;
            
            len--;
        }
        return -1;
    }
};