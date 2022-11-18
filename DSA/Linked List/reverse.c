// WAP to reverse a LL
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create(int n)
{
    struct node *newNode, *temp;
    int i;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for node 1: ");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    for (i = 2; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
}
void insert(int n)
{
    int data, i = 0;
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to be entered at position %d: ", n);
    scanf("%d", &newNode->data);
    if (n == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
        while (ptr != NULL)
        {
        }
}
void reverse()
{
    struct node *prev, *curr;
    if (head != NULL)
    {
        prev = head;
        curr = head->next;
        head = head->next;
        prev->next = NULL;
        while (head != NULL)
        {
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }
        head = prev;
    }
}
void traverse()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("List Empty!\n");
        exit(0);
    }
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    printf("Enter Option:");
    printf("1.Create\n");
    printf("2. Reverse\n");
    printf("3. Insert\n");
    printf("4. Display\n");
}