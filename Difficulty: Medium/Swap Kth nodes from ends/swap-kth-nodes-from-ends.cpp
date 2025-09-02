/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // Code with Radheshyam (.^.)
        Node* sk, *ek;
        Node*temp=head;
        for(int i=0;i<k-1;i++){
            if(!temp || !temp->next) return head;
            temp=temp->next;
        }
        sk=temp;
        ek=head;
        while(temp->next){
            ek=ek->next;
            temp=temp->next;
        }
        
        int val=sk->data;
        sk->data=ek->data;
        ek->data=val;
        
        return head;
    }
};