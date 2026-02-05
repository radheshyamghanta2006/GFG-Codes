class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // Code with Radheshyam (.^.)
        int left=0,right=0,len=0,maxLen=0,zeros=0;
        
        while(right<arr.size()){
            if(arr[right]==0) zeros++;
            if(zeros>k){
                if(arr[left]==0) zeros--;
                left++;
            }
            if(zeros<=k){
                len=right-left+1;
                maxLen=max(maxLen,len);
            }
            right++;
        }
        return maxLen;
    }
};
