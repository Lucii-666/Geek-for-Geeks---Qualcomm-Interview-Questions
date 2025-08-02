/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isBST(Node* node, long long minVal, long long maxVal) {
        if (!node) return true;
        if (node->data <= minVal || node->data >= maxVal)
            return false;
        return isBST(node->left, minVal, node->data) &&
               isBST(node->right, node->data, maxVal);
    }

    bool isBST(Node* root) {
        return isBST(root, LLONG_MIN, LLONG_MAX);
    }
};
