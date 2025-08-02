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
    int lengthOfLoop(Node *head) {
        Node* s = head;
        Node* f = head;
        while (f != NULL && f->next != NULL) {
            s = s->next;
            f = f->next->next;
            
            if (s == f) {
                int cnt = 1;
                Node* temp = s->next;
                while (temp != s) {
                    cnt++;
                    temp = temp->next;
                }
                return cnt;
            }
        }
        return 0;
    }
};
