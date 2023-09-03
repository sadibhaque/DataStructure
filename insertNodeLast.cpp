#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node node;

node *head = NULL;


void insertLast(int x) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;

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


void printList(){
    node *current = head;
    while(current != NULL){
        printf("%d  ",current->data);
        current = current -> next;
    }
}


int main(){

    node *node1 = (node*)malloc(sizeof(node));
    node1->data = 5;
    node1->next = NULL;
    head = node1;

    int n,x;

    printf("Number of Node : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Data for Current Node : ");
        scanf("%d",&x);
        insertLast(x);
    }
    printList();
}
