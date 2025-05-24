class Solution {
  public:
    int sumSubstrings(string &s) {
        // Code with Radheshyam (.^.)
         int n = s.length();

        int place_value = 1; 
        int sum         = 0; 

        for (int i = n - 1; i >= 0; i--) {
          int digit = s[i] - '0'; 

         sum += digit * (i + 1) * place_value;

        place_value = place_value * 10 + 1;
        }

        return sum;
        
    }
};