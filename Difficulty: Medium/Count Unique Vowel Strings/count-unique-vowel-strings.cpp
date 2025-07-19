class Solution {
  public:
    int vowelCount(string& s) {
       // Code with Radheshyam (.^.)
        int freq[5] = {0}; 

        for (char ch : s) {
            if (ch == 'a') freq[0]++;
            else if (ch == 'e') freq[1]++;
            else if (ch == 'i') freq[2]++;
            else if (ch == 'o') freq[3]++;
            else if (ch == 'u') freq[4]++;
        }

        int count = 0;
        int ways = 1;

        for (int i = 0; i < 5; ++i) {
            if (freq[i] > 0) {
                count++;
                ways *= freq[i];
            }
        }

        if (count == 0) return 0;

        return ways * factorial(count);
    }
    
    public:
    int factorial(int n) {
        int fact = 1;
        for (int i = 2; i <= n; ++i) fact *= i;
        return fact;
    }
};