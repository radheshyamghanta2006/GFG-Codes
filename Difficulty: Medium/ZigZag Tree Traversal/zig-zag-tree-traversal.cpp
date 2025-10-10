/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // cCode with Rasdheshyam (.^.)
        vector<int>ans;
        queue<Node*>q;
        int flag=0;
        q.push(root);
        while(!q.empty()){
            flag=!flag;
            vector<int>temp;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* ele=q.front();
                q.pop();
                temp.push_back(ele->data);
                if(ele->left)q.push(ele->left);
                if(ele->right)q.push(ele->right);
            }
            // Zig zag case
            if(flag==0) reverse(temp.begin(),temp.end());
            for(auto element : temp){
                ans.push_back(element);
            }
        }
        return ans;
    }
};