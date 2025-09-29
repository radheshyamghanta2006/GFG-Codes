class Solution {
  public:
    int maxSubarrSum(vector<int>& arr, int a, int b) {
        // Code with Radheshyam (.^.)
        int n = arr.size();
        // Prefix sums: prefix[i] = sum of first i elements
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }

        long long maxSum = LLONG_MIN;
        deque<int> dq; // holds indices of candidate prefix minima

        for (int j = a; j <= n; j++) {
            // Maintain increasing prefix values in deque
            while (!dq.empty() && prefix[dq.back()] >= prefix[j - a]) {
                dq.pop_back();
            }
            dq.push_back(j - a);

            // Remove indices that are outside the window of length b
            if (dq.front() < j - b) {
                dq.pop_front();
            }

            if (!dq.empty()) {
                maxSum = max(maxSum, prefix[j] - prefix[dq.front()]);
            }
        }

        return static_cast<int>(maxSum);
        
    }
};