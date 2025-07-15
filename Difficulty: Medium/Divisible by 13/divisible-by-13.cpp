class Solution {
  public:
    bool divby13(string &s) {
        // Code with Radheshyam (.^.)
        int num = 0;
        for(int i=0;i<s.size();i++){
            num = (num * 10 + s[i] - '0') % 13;
        }
        return num == 0; // if numm == 0 then return true else false
    }
};