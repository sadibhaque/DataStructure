#include <bits/stdc++.h>
using namespace std;

#define ll long long int

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelTraverse(Node* root){
    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<temp -> data<<" ";

        if(temp -> left != NULL) q.push(temp -> left);
        if(temp -> right != NULL) q.push(temp -> right);
    }
}

void preOrder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    freopen("input.txt", "r", stdin);

    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    root -> left = a;
    root -> right = b;
    a -> left = c;
    a -> right = h;
    b -> right = d;
    c -> right = e;
    h -> right = i;
    d -> left = f;
    d -> right = g;

    traverse(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);

    return 0;
}

