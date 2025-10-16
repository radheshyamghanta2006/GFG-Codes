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
  Node* dfs(Node* root, int l, int r) {
        if (root == NULL)
            return NULL;
        
        // modifying left and right
        root->left = dfs(root->left, l, r);
        root->right = dfs(root->right, l, r);
        
        if (root->data < l) {
            return root->right;
        }
        if (root->data > r) {
            return root->left;
        }
        return root;
    }
    Node* removekeys(Node* root, int l, int r) {
        // Code with Radheshyam (.^.)
        return dfs(root,l,r);
        
    }
};