class Solution {
  public:
    int minCost(vector<int>& arr) {
        // Code with Radheshyam
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto x : arr){
            pq.push(x);
        }
        
        int n = arr.size()-1;
        int cost = 0;
        
        while(n-->0){
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            cost += x+y;
            pq.push(x+y);
        }
        return cost;
    }
};