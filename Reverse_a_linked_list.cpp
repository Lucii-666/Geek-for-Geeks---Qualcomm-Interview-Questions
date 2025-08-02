/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* pre = nullptr;
        Node* curr = head;
        while (curr != nullptr) {
            Node* nbr = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nbr;
        }
        return pre;
    }
};
