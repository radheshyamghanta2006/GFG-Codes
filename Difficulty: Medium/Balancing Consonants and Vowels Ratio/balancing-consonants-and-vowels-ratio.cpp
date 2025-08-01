class Solution {
  public:
    int countBalanced(vector<string>& arr) {
        // Code with Radheshyam (.^.)
        int ans = 0;
        set<char>vowel{'a','e','i','o','u'};
        map<int,int>mp;
        mp[0]=1;
        int sum = 0;
        for(auto it:arr){
            
            int val=0;
            for(char ch:it){
                if(vowel.find(ch)!=vowel.end()){
                    val++;
                } 
                else{
                    val--;
                }
            }
            sum+=val;
            ans+=mp[sum];
            mp[sum]++;
        }
        return ans;
    }
};