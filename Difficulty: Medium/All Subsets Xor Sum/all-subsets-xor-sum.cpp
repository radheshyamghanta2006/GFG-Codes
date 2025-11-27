class Solution {
  public:
    int subsetXORSum(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        int o = 0;
        for(int num : arr) o |= num;

        return o << (arr.size() - 1);
    }
};