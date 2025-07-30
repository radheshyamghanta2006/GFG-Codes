class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
         // Code with Radheshyam (.^.)
        int n = arr.size();
        for(int i=0;i<n;i=i+k){
           int start = i;
           int end = min(i+k-1,n-1);
           while(start<end){
               swap(arr[start],arr[end]);
               start++;
               end--;
           }
        }
    }
};
