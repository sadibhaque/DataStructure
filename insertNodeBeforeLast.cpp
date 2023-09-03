void insertBeforeLast(string s) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->str = s;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    if (head->next == NULL) {
        newNode->next = head;
        head = newNode;
        return;
    }

    node *current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}