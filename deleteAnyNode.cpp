#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node *next;
};

typedef struct node node;

node *head = NULL;

void deleteAnyNode(int key) {
    if (head == NULL) {
        cout << "Empty" << endl;
        return;
    }
    if (head->data == key) {
        node *temp = head;
        head = head->next;
        free(temp);
        return;
    }
    node *current = head;
    while (current->next != NULL && current->next->data != key) {
        current = current->next;
    }
    if (current->next != NULL) {
        node *temp = current->next;
        current->next = current->next->next;
        free(temp);
    } else {
        cout << "Key not found." << endl;
    }
}

void printList() {
    cout << "The List is : ";

    node *current = head;

    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

int main() {

    node *node1 = (node*)malloc(sizeof(node));
    node *node2 = (node*)malloc(sizeof(node));

    node1->data = 5;
    node2->data = 6;

    node1->next = node2;
    node2->next = NULL;

    head = node1;

    int key;
    cin>>key;

    deleteAnyNode(key);

    printList();

    return 0;
}
