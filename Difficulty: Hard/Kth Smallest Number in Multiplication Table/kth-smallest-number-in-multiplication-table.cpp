class Solution {
  public:
  
    int count(int mid, int m, int n){
        int countSum =0;
        for(int i=1; i <= m ; i++){
            countSum += min(mid / i , n);
        }
        return countSum;
    }
    
    int kthSmallest(int m, int n, int k) {
        // Code with Radheshyam (.^.)
        int l = 1;
        int h = m*n;
        
        while(l < h){
            int mid = (l + h)/2;
            
            if(count(mid, m, n) >= k){
                h = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
