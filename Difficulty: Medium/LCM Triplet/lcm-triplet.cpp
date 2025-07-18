class Solution {
  public:
    int lcmTriplets(int n) {
        // Code with Radheshyam (.^.)
        if(n<=2) return n;
        if((n&1)==1) return n*(n-1)*(n-2);
        if((n%3)==0) return (n-1)*(n-2)*(n-3);
        return n*(n-1)*(n-3);
    }
};