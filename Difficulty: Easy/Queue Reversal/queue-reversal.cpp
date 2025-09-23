class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // Code with Radheshyam (.^.)
        
        // Base case
        if(q.empty()) return ;
        
        // recursive case
        int front = q.front();
        q.pop();
        
        reverseQueue(q);
        
        q.push(front);
        
    }
};