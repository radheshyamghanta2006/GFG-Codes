/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  bool  solve(Node* right,Node* left){
      if(left == NULL || right == NULL) return left == right;
      if(right->data != left->data) return false;
      return solve(right->right,left->left) && solve(right->left,left->right);
  }
  
    bool isSymmetric(Node* root) {
        // Code with Radheshyam (.^.)
        Node* right = root->right;
        Node* left = root->left;
        
        return solve(left,right);
    }
};