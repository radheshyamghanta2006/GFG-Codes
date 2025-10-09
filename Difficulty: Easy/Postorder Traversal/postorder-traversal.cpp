/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void postorder(Node *root, vector<int>&ans){
      // Base case
        if(root == NULL) return;
      // Recursive case
      postorder(root->left,ans);
      postorder(root->right,ans);
      ans.push_back(root->data);
  }
  
    vector<int> postOrder(Node* root) {
        // Code with Radheshyam (.^.)
        vector<int> ans;
        postorder(root,ans);
        return ans;
    }
};