class Solution {
    public:
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code with Radheshyam (.^.)
     int n = arr.size();
        if ((long long)m * k > n) return -1;
        
        int left = INT_MAX, right = INT_MIN;
        for (int day : arr) {
            left = min(left, day);
            right = max(right, day);
        }
        
        int ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canMake(arr, m, k, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }

private:
    bool canMake(vector<int>& arr, int m, int k, int day) {
        int bouquets = 0, flowers = 0;
        for (int bloom : arr) {
            if (bloom <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }
};