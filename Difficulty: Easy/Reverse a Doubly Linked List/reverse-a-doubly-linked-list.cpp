/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // Code with Radheshyam (.^.)
        if (head->next == nullptr) return head;

        Node* curr = head;
        Node* temp = nullptr;

        while (curr != nullptr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }

        if (temp != nullptr) head = temp->prev;

        return head;
        
    }
};