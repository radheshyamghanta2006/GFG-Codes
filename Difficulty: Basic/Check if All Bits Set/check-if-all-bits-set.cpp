class Solution {
  public:
  // Code with Radheshyam (.^.)
    bool isBitSet(int n) {
        if (n == 0) {
            return false;
        }
        return (n & (n + 1)) == 0;
    }
};