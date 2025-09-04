/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // Code with Radheshyam (.^.)
        if(!head) return head;
        Node *curr=head, *prev=NULL, *next=curr->next;
        int count=0;
        while(curr && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count ++;
        }
        if(next) head->next=reverseKGroup(next,k);
        return prev;
    }
};