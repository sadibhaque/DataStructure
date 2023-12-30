#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        this-> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void preOrder(node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(node* root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    freopen("input.txt", "r", stdin);

    node* root = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    node* d = new node(50);
    node* e = new node(60);
    node* f = new node(70);
    node* g = new node(80);
    node* h = new node(90);
    node* i = new node(100);


    root -> left = a;
    root -> right = b;
    a -> left = c;
    a -> right = h;
    b -> right = d;
    c -> right = e;
    h -> right = i;
    d -> left = f;
    d -> right = g;


    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);

    return 0;
}

