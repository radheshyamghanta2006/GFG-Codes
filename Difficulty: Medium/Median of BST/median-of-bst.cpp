/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  int count = 0;
    int result = 0;
    void inorder(Node* node, int mid){
        if(!node) return;
        inorder(node->left,mid);
        count++;
        if(count == mid){
            result = node->data;
            return;
        }
        inorder(node->right,mid);
    }
    int countNodes(Node* node){
        if(!node) return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }
    
    int findMedian(Node* root) {
        // Code with Radheshyam (.^.)
        int nodes = countNodes(root);
        int mid = (nodes + 1) / 2;
        inorder(root, mid);
        return result;
    }
};