#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *ptr, *new;

    head = NULL;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &new->data);
    new->next = NULL;
    head = new;
    ptr = head;
    char choice;
    printf("Do you want to add another node (Y/N):\n");
    getchar();
    scanf("%c", &choice);
    while (choice == 'y' || choice == 'Y')
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        getchar();
        scanf("%d", &new->data);
        new->next = NULL;
        ptr->next = new;
        ptr = ptr->next;
        printf("Do you want to add another node (Y/N):\n");
        getchar();
        scanf("%c", &choice);
    }
    ptr = head;
    while (ptr != 0)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}