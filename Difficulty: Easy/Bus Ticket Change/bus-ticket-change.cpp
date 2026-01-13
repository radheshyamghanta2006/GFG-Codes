class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        map<int,int>m1;
        m1[5]=0;
        m1[10]=0;
        m1[20]=0;
        for(auto it:arr){
            m1[it]++;
            int rem=it-5;
            if(rem>=10 and m1[10]>0){
                m1[10]--;
                rem-=10;
            }
            while(rem>=5 and m1[5]>0){
                m1[5]--;
                rem-=5;
            }
            if(rem!=0) return false;
        }
        return true;
    }
};