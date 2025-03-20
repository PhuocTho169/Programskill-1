#include <iostream>
#include <vector>
using namespace std;

// Definition of an N-ary tree node
struct Node {
    int val;
    vector<Node*> children;

    // Constructor for the Node
    Node(int _val) {
        val = _val;
        children = {};
    }
};

// Preorder traversal function
void preorder(Node* root) {
    if (root == NULL) {
        return;
    }

    // Print the current node's value
    cout << root->val << " ";

    // Recur for all child nodes
    for (auto child : root->children) {
        preorder(child);
    }
}

int main() {
    // Example tree construction
    Node* root = new Node(1);
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(3));
    root->children.push_back(new Node(4));
    root->children[1]->children.push_back(new Node(5));
    root->children[1]->children.push_back(new Node(6));

    // Preorder traversal
    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}
