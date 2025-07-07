class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int n = arr.size();
        vector<int>result(n,-1);
        stack<int>st;
        
        for(int i=0;i<n*2;i++){
            
            int idx = i%n;
            int num = arr[idx];
            
            while(!st.empty() && num > arr[st.top()]){
                result[st.top()] = num;
                st.pop();
            }
            
            if(i < n){
                st.push(idx);
            }
        }
        return result;
    }
};