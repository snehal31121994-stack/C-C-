#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main()
{
    struct Node *node1, *node2;
    node1 = malloc(sizeof(struct Node));
    node2 = malloc(sizeof(struct Node));

    if (node1 == NULL || node2 == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
}

    node1->data = 10;
    node1->next = node2; // Connect node1 to node2
    node2->data = 20;
    node2->next = NULL;

    printf("Data in node1: %d\n", node1->data);
    printf("Data in node2: %d\n", node1->next->data); // Accessing data in node2 through node1

    free(node1);
    free(node2);
    return 0;
}