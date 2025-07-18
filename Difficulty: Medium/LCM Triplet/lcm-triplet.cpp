class Solution {
  public:
    int lcmTriplets(int n) {
        // Code with Radheshyam (.^.)
        if(n<=2) return n; // If the value of n is equal to 1 or 2 then we should return n
        if((n%2)==1) return n*(n-1)*(n-2); // If n is odd number like 7 then ans should be 7*6*5 
        if((n%3)==0) return (n-1)*(n-2)*(n-3); // If n is even but also divisibal by 3 like 12 then ans should be 12*11*10*9 hear for max value of LCM then we need to took 11*10*9
        return n*(n-1)*(n-3); // If n is even but not devisible by 3 like 16 then ans should be 16*15*14*13 we need to take 16*15*13 
    }
};
