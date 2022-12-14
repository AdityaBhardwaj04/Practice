// WAP to insert in a LL
#include <stdio.h>
#include <stdlib.h>
int num_of_nodes = 0;
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
    struct node *newNode, *ptr;
    ptr = head;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to be entered: ");
    scanf("%d", &newNode->data);
    if (n == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else if (n == num_of_nodes)
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        newNode->next = NULL;
        ptr->next = newNode;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
                break;
        }
        if (ptr != NULL)
        {
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
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
    printf("\n");
}
int main()
{
    int choice;
    while (choice != 5)
    {
        printf("Enter Option:\n");
        printf("1.Create\n");
        printf("2. Reverse\n");
        printf("3. Insert\n");
        printf("4. Display\n");
        printf("Enter selected choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter number of nodes to be created: ");
            scanf("%d", &num_of_nodes);
            create(num_of_nodes);
            break;
        }
        case 2:
        {
            reverse();
            break;
        }
        case 3:
        {
            int n;
            printf("Enter position element to be entered: ");
            scanf("%d", &n);
            insert(n);
            break;
        }
        case 4:
        {
            traverse();
            break;
        }
        }
    }
}