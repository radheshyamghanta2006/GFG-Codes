class Solution {
  public:
  
    string findLargest(vector<int> &nums) {
        // Code with Radheshyam (.^.)
        
        vector<string> arr;
        for (int num : nums) {
            arr.push_back(to_string(num));
        }

        sort(arr.begin(), arr.end(), [](const string &a, const string &b) {
            return (b + a) < (a + b);
        });

        if (arr[0] == "0") return "0";

        string result;
        for (string &s : arr) {
            result += s;
        }

        return result;
    }
};