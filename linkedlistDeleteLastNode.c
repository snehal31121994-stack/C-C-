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

    struct Node *temp = node1;
   
    

    while(temp->next->next != NULL)
    {
       temp = temp->next;
    }
    struct Node *last = temp->next;
    temp->next = NULL;
    free(last);
      
   temp = node1; // Reset temp to the head of the list

    while(temp != NULL)
    {
        printf("%d = ", temp->data);
        temp = temp->next; // Move to the next node
    }

    free(node1);
    free(node2);
    return 0;
}