#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
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
}

    node1->data = 10;
    node1->next = node2; // Connect node1 to node2
    node2->data = 20;
    node2->next = node3; // Connect node2 to node3
    node3->data = 30;
    node3->next = NULL;

    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = 40;
    node3->next = newNode; // Connect node3 to newNode
    newNode->next = NULL;
    
    struct Node *temp = node1;

    while(temp->next != NULL)
    {
        printf("%d = ", temp->data);
        temp = temp->next; // Move to the next node
    }
    printf("%d = ", temp->data); // Print the last node's data

       
       
    free(node1);
    free(node2);
    free(node3);
    free(newNode);

    return 0;
}