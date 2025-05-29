/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
  
    int maxSum = 0;
    int maxLen = 0;
    
    void dfs(Node* node, int currLen, int currSum){
         if(!node) return;
         
         currLen +=1;
         currSum += node->data;
         
         if(!node->left && !node->right){
             if(currLen > maxLen){
                 maxLen = currLen;
                 maxSum = currSum;
             }else if(currLen == maxLen && currSum > maxSum){
                 maxSum = currSum;
             }
             return;
         }
         
         dfs(node->left, currLen, currSum);
         dfs(node->right, currLen, currSum);
    }
  
    int sumOfLongRootToLeafPath(Node *root) {
        // Code with Radheshyam (.^.)
        dfs(root, 0, 0);
        return maxSum;
        
        
    }
};