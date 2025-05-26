/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // Code here
        Node* newNode = new Node(data);

        Node* curr       = head;
        Node* nextToCurr = head->next;

        while (true) {
            if (curr->data <= data && data <= nextToCurr->data) {
                break;
            }
            
            if (curr->data > nextToCurr->data) {
                if (data <= nextToCurr->data || data >= curr->data) {
                    break;
                }
            }

            curr       = curr->next;
            nextToCurr = nextToCurr->next;
        }

        curr->next    = newNode;
        newNode->next = nextToCurr;

        return (data < head->data) ? newNode : head;
    }
};