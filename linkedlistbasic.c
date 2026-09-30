#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main()
{

    struct Node *node1;
    node1 = malloc(sizeof(struct Node));

    if (node1 == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

    node1->data = 10;
    node1->next = NULL;
    printf("Data in node1: %d\n", node1->data);
    free(node1);
    return 0;
}