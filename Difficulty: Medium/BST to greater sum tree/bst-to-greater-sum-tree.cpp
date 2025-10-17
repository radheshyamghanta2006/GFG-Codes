/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
  int sum=0;
  void dfs(Node *root){
    //base case
    if(root == NULL){
        return;
    }
    // recursive case
    dfs(root->right);
    sum += root->data;
    root->data = sum - root->data;
    dfs(root->left);
}
    void transformTree(Node *root) {
       // Code with Radheshyam (.^.)
       dfs(root);
        
    }
};