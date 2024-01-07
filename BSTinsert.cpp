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

Node* input(){
    int data;
    cin>>data;

    Node* root;
    if(data != -1) root = new Node(data);
    else root = NULL;

    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        if(l != -1) temp -> left = new Node(l);
        else temp -> left = NULL;
        if(r != -1) temp -> right = new Node(r);
        else temp -> right = NULL;

        if(temp -> left) q.push(temp -> left);
        if(temp -> right) q.push(temp -> right);
    }
    return root;
}

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

bool binarySearch(Node* root, int key){
    if(root == NULL) return false;
    if(root -> data == key) return true;

    if(key < root -> data) return binarySearch(root -> left,key);
    else return binarySearch(root -> right,key);
}

void insert(Node*& root, int val){
    if(root == NULL){
        root = new Node(val);
        return;
    }

    if(val < root -> data){
        insert(root -> left,val);
    }
    else insert(root -> right,val);
}

arrayToBst(Node* root){
    
}

int main(){
    freopen("input.txt", "r", stdin);

    Node* root = input();

    //if(binarySearch(root,7 )) cout<<"YES\n";
    //else cout<<"NO\n";

    insert(root,13);
    insert(root,32);
    insert(root,27);
    insert(root,22);

    levelTraverse(root); cout<<endl;

    return 0;
}

//20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1 

