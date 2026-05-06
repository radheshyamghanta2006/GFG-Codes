/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int getSize(Node* root) {
        // Code with Radheshyam (.^.)
        if(root == NULL) return 0;
        
        int leftSubTree = getSize(root->left);
        int rightSubTree = getSize(root->right);
        
        return (1 + leftSubTree + rightSubTree);
    }
};