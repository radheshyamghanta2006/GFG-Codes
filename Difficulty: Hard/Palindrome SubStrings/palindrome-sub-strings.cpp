class Solution {
  public:
    int countPS(string &s) {
        // Code with Radheshyam (.^.)
         int n = s.size();
        int count = 0;

        for (int center = 0; center < n; center++) {
            count += expandFromCenter(s, center, center);
            count += expandFromCenter(s, center, center + 1);
        }

        return count;
    }


    int expandFromCenter(const string &s, int left, int right) {
        int count = 0;

        while (left >= 0 && right < (int)s.size() && s[left] == s[right]) {
            if (right - left + 1 >= 2) count++;
            left--;
            right++;
        }

        return count;
    }
};