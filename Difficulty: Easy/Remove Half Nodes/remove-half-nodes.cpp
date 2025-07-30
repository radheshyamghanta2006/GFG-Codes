/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the root of the modified tree after removing all the half nodes.
class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        // Code with Radheshyam (.^.)
        // Base case
        if(root == NULL) return NULL;
        // Recursive case
        root->left=RemoveHalfNodes(root->left);
        
        root->right=RemoveHalfNodes(root->right);
        
        if(root->left == NULL && root->right != NULL){
            return root->right;
        }
        if(root->left != NULL && root->right == NULL){
            return root->left;
        }
        return root;
    }
};