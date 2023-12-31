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

Node* inputTree(){
    int data;
    cin>>data;
    Node* root;

    if(data == -1) root = NULL;
    else root = new Node(data);

    queue <Node*> q;
    if(root != NULL) q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        if(l == -1) temp -> left = NULL;
        else temp -> left = new Node(l);
        
        if(r == -1) temp -> right = NULL;
        else temp -> right = new Node(r);

        if(temp -> left != NULL) q.push(temp -> left);
        if(temp -> right != NULL) q.push(temp -> right);
    }
    return root;
}

int count(Node* root){
    if(root == NULL) return 0;

    int left = count(root->left);
    int right = count(root->right);

    return left + right + 1;
}

int main(){
    freopen("input.txt", "r", stdin);

    Node* root = inputTree();

    cout<<count(root)<<endl;

    return 0;
}

//Input
//10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1

