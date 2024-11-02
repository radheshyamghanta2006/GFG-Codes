//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// A node of the doubly linked list
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to insert a node at the end of the Doubly Linked List
void push(DLLNode **tailRef, int new_data) {
    // Allocate node
    DLLNode *newNode = new DLLNode(new_data);

    // Since we are adding at the end, next is NULL
    newNode->next = NULL;

    newNode->prev = (*tailRef);

    // Change next of tail node to new node
    if ((*tailRef) != NULL)
        (*tailRef)->next = newNode;

    (*tailRef) = newNode;
}

// Function to print nodes in a given doubly linked list
void printList(DLLNode *head) {
    // Forward traversal
    if (head == NULL)
        return;

    DLLNode *last = NULL;
    while (head != NULL) {
        cout << head->data << " ";
        last = head;
        head = head->next;
    }
    cout << "\n";

    // Backward traversal
    while (last != NULL) {
        cout << last->data << " ";
        last = last->prev;
    }
    cout << "\n";
}


// } Driver Code Ends

/* Structure of the node of the list is as
class DLLNode {
public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
  // Finds the middle node in the list
  DLLNode* getMiddle(DLLNode* head){
      if (!head || !head->next) return head;
      DLLNode* slow=head;
      DLLNode* fast=head->next;
      while(fast && fast->next){
          slow=slow->next;
          fast=fast->next->next;
          
      }
      return slow;
  }
  //Merges two sorted lists (left and right)
  DLLNode* merge(DLLNode* left,DLLNode* right){
      if (!left) return right;
      if (!right) return left;
      // Choose the smaller node between left and right
      if(left->data<right->data){
          left->next=merge( left->next,right);
           left->next->prev = left;
            left->prev = NULL;
            return left;
      }
      else{
          right->next=merge(left, right->next);
           right->next->prev = right;
            right->prev = NULL;
            return right;
  }
  
  }
    DLLNode *sortDoubly(DLLNode *head) {
        //short the double linked list
        if(!head || !head->next) return head;
        DLLNode* mid=getMiddle(head);
        DLLNode* nextToMid = mid->next;
         //devide the list in to two halves
         mid->next=NULL;
         nextToMid->prev=NULL;
         
          DLLNode* left = sortDoubly(head);
          DLLNode* right = sortDoubly(nextToMid);
        //marge the two halves
      return  merge(left,right);
    }
  
};


//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << "List is empty.\n";
            continue;
        }

        DLLNode *head = new DLLNode(arr[0]);
        DLLNode *tail = head;

        // Check if the array is empty
        for (size_t i = 1; i < arr.size(); ++i) {
            push(&tail, arr[i]);
        }

        Solution ob;
        head = ob.sortDoubly(head);

        printList(head);
    }
    return 0;
}

// } Driver Code Ends