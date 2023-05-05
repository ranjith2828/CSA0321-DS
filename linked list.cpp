#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void displayList(struct node *head)
 {
    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void insertAtBeginning(struct node **head, int data)
 {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct node **head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
	 {
        *head = newNode;
        return;
    }
    struct node *current = *head;
    while (current->next != NULL)
	 {
        current = current->next;
    }
    current->next = newNode;
}

void deleteNode(struct node **head, int key)
 {
    struct node *temp = *head, *prev;
    if (temp != NULL && temp->data == key)
	 {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
	 {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) 
	{
        return;
    }
    prev->next = temp->next;
    free(temp);
}

int main() {
    struct node *head = NULL;

   
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("Initial List: ");
    displayList(head);


    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);

    printf("List after inserting nodes at the end: ");
    displayList(head);

    
    deleteNode(&head, 3);

    printf("List after deleting a node: ");
    displayList(head);

    return 0;
}
