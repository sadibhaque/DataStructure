#include <bits/stdc++.h>
using namespace std;

#define ll long long int

struct node{
    int data;
    struct node *next;
};

typedef struct node node;

node *head = NULL;

void deleteLastNode(){
    node *current = head;
    while(current -> next -> next != NULL){
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

void printList(){
    node *current = head;
    while(current != NULL){
        printf("%d  ",current->data);
        current = current -> next;
    }
}

int main() {

    node *n1 = (node*)malloc(sizeof(node));
    node *n2 = (node*)malloc(sizeof(node));
    n1->data = 5;
    n2->data = 7;
    n1->next = n2;
    n2->next = NULL;
    head = n1;

    deleteLastNode();
    printList();

    return 0;
}