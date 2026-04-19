class Solution {
  public:
    bool isPower(int x, int y) {
        // Code with Radheshyam (.^.)
        if (y == 1){
            return true;
        }
        if (x == 1){
            return false;
        }
        while (y % x == 0){
            y = y / x;
        }
        return y == 1;
    }
};
