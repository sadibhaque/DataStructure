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

int countHeight(Node* root){
    if(root == NULL) return 0;

    int left = countHeight(root->left);
    int right = countHeight(root->right);

    return max(left,right) + 1;
}

int main(){
    freopen("input.txt", "r", stdin);

    Node* root = inputTree();

    cout<<countHeight(root)<<endl;

    return 0;
}

//Input
//10 20 50 30 40 70 60 -1 -1 -1 -1 -1 80 -1 -1 -1 -1
