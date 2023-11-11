#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

ll MAX = 1e5+10;

struct Node {
    ll data; 
    Node* left;
    Node* right;
};

void postorder(Node* root) {
    if (root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data <<" ";
}

int main() {
    Node* root = new Node{5};
    root->left = new Node{2};
    root->right = new Node{7};
    root->left->left = new Node{3};
    root->left->right = new Node{9};
    root->right->right = new Node{1};
    root->right->right->right = new Node{4};

    postorder(root);

    return 0;
}
