#include <bits/stdc++.h>
using namespace std;

#define ll long long int

struct node {
    int data;
    struct node *next;
};

typedef struct node node;
node *head = NULL;

void deleteFirst(){
    if(head == NULL) return;
    node *current = head;
    head = current -> next; 
    free(current);
}

void deleteLastNode(){
    node *current = head;
    if(current->next == NULL){
        deleteFirst();
    }
    while(current -> next -> next != NULL){
        current = current -> next;
    }
    free(current->next);
    current->next = NULL;
}

void insertLastNode(ll x){
    node *newNode = (node*) malloc(sizeof(node));
    newNode -> data = x;
    newNode -> next = NULL;
    if(head == NULL){
        head = newNode;
        return;
    }

    node *current = head;
    while(current->next != NULL){
        current = current -> next;
    }
    current -> next = newNode;
}   

void printList(){
    node *current = head;
    while(current != NULL){
        cout<<current->data<<" ";
        current = current -> next;
    }
}

void enq(int x){
    insertLastNode(x);
}
void deq(){
    deleteFirst();
}

int main()
{
    enq(1);
    enq(2);
    enq(3);
    enq(4);
    deq();

    printList();
    
}
