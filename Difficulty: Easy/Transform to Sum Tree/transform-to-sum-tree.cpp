/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  // Code with Radheshyam (.^.)
    int transform(Node* root) {
        if (!root) {
            return 0;
        }

        int oldVal = root->data;

        int leftSum = transform(root->left);
        int rightSum = transform(root->right);

        root->data = leftSum + rightSum;

        return oldVal + root->data;
    }

    void toSumTree(Node *root) {
        transform(root);
    }
};