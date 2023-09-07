#include <bits/stdc++.h>
using namespace std;

#define ll long long int

struct node{
    int data;
    struct node *next;
};

typedef struct node node;
node *head = NULL;


void push(int x){
    node *newNode = (node*) malloc(sizeof(node));
    newNode-> data = x;
    newNode-> next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void pop(){
    if (head == NULL) {
        return;
    }

    if(head->next == NULL){
        free(head);
        head = NULL;
        return;
    }

    node *current = head;
    while(current->next->next != NULL){
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}   

void printStack(){
    node *current = head;
    while(current != NULL){
        cout<<current->data<<endl;
        current = current -> next;
    }
}

void freeList() {
    node *current = head;
    while (current != NULL) {
        node *temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL;
}



int main() {

    push(3);
    push(5);
    pop();
    push(1);
    push(2);
    pop();

    printStack();
    freeList();
    return 0;
}