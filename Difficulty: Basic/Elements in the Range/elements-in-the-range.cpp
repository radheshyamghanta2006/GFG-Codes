class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int count=0;
        for(auto it:arr)
        {
            if(it>=start && it<=end)
            {
                count++;
            }
        }
        return (count==(end-start+1));
    }
};