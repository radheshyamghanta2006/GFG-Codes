class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++)
        freq[arr[i]]++;
        
        vector<int>ans(arr.size(),-1);
        stack<int>st;
        
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && freq[arr[i]]>freq[arr[st.top()]]){
                ans[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
