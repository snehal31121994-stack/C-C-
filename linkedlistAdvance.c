#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void display(struct Node *head)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
};

/*void insertatbeginning(struct Node **head, int value)
{
 struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = *head; // Point new node to the current head
    *head = newNode; // Update head to the new node

};*/

void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode; // If the list is empty, make the new node the head
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next; // Traverse to the end of the list
    }
    temp->next = newNode; // Link the last node to the new node
};

void deleteNode(struct Node **head, int value)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    // If the node to be deleted is the head
    if (temp != NULL && temp->data == value)
    {
        *head = temp->next; // Change head
        free(temp); // Free old head
        return;
    }

    // Search for the node to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found in the list
    if (temp == NULL)
    {
        printf("Value %d not found in the list\n", value);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp); // Free memory
};


int main()
{
     struct Node *node1, *node2, *node3;
    node1 = malloc(sizeof(struct Node));
    node2 = malloc(sizeof(struct Node));
    node3 = malloc(sizeof(struct Node));

    if (node1 == NULL || node2 == NULL || node3 == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
 };

    node1->data = 10;
    node1->next = node2; // Connect node1 to node2
    node2->data = 20;
    node2->next = node3; // Connect node2 to node3
    node3->data = 30;
    node3->next = NULL;

    display(node1);
    printf("\n");
   // insertatbeginning(&node1, 5);
   insertAtEnd(&node1, 40);
   deleteNode(&node1, 20);
    display(node1);

    struct Node *temp = node1;

while (temp != NULL)
{
    struct Node *next = temp->next;
    free(temp);
    temp = next;
}
    return 0;
}