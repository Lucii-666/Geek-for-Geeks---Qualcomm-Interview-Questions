/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> result;
        if (!root) return result;
        //BFS
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; ++i) {
                Node* curr = q.front();
                q.pop();
                if (i == 0) result.push_back(curr->data);
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
        }
        
        return result;
    }
};
