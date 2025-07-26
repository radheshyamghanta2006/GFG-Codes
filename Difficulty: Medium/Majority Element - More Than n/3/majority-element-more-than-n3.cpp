class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        int ele1 = arr[0],ele2=arr[0];
        int count1 = 0, count2 = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(ele1==arr[i]) count1++;
            else if(ele2==arr[i]) count2++;
            else if(count1==0){
                ele1=arr[i];
                count1=1;
            }
            else if(count2==0){
                ele2=arr[i];
                count2=1;
            }
            else {
                count1--;
                count2--;
            }
        }
        int freq1=0,freq2=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(arr[i]==ele1) freq1++;
            else if(arr[i]==ele2) freq2++;
        }
        if(freq1>n/3) ans.push_back(ele1);
        if(freq2>n/3) ans.push_back(ele2);
        if(ans.size()==0) return {};
        sort(ans.begin(),ans.end());
        return ans;
    }
};