class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int l = 0, r = arr.size() - 1;
        int ans = 0;

        while (l < r) {
            int hgt = min(arr[l], arr[r]);
            int wdt = r - l;
            ans = max(ans, hgt * wdt);

            if (arr[l] <= arr[r]) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
        
    }
};