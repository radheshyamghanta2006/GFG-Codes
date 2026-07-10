class Solution {
  public:
    int getCount(int n) {
        // Code with Radheshyam (.^.)
        int ans=0;
        
        for(int k=1;k<sqrt(2*n);k++)
        {
            if((n-(k*(k-1))/2)%k==0)
            {
                ans++;
            }
        }
        return ans-1;
    }
};