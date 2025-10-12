/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  int solve(Node* root, int &moves){
        if(!root) return 0;
        int leftAns = solve(root->left, moves);
        int rightAns = solve(root->right, moves);
        moves += abs(leftAns) + abs(rightAns);
        return root->data - 1 + leftAns + rightAns;
        
    }
  
    int distCandy(Node* root) {
        // Code with Radheshyam (.^.)
        
        int moves = 0;
        solve(root,moves);
        return moves;
    }
};