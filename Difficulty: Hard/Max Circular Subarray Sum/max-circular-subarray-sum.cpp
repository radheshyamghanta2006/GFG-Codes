class Solution {
  public:
  
  int kadane(vector<int> &arr){
    int sum = 0;
    int mx = arr[0];  
    for(auto it:arr){
        sum+=it;
        mx = max(mx,sum);
        sum = max(sum,0);
    }
    return mx;
  }
  
    int maxCircularSum(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int mx =* max_element(arr.begin(),arr.end());
        if(mx<0){
            return mx;
        }
        int ans = kadane(arr);
        int sum = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            sum += arr[i];
            arr[i] =-1*arr[i];
        }
        int temp = kadane(arr);
        ans = max(ans,sum+temp);
        return ans;
    }
};