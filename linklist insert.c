#include<stdio.h>
#include<stdlib.h>


struct node{
    int info;
    struct node* link;
};

struct node* start = NULL;//global variable

void display()
{
    struct node* temp;

    if (start == NULL)
        printf("\nList is empty\n");

    else
        {
        temp = start;
        while (temp != NULL)
            {
            printf("data = %d\n", temp->info);
            temp = temp->link;
            }
        }
}

void insertFront()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);
    temp->info = data;

    temp->link = start;
    start = temp;
}

void insertEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));

    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);

    temp->link = 0;
    temp->info = data;
    head = start;
    while (head->link != NULL) {
        head = head->link;
    }
    head->link = temp;
}


void insertPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));

    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);

    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1) {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}

int main()
{
    while(1){
    int choice;
        printf("1. Insert At First Place");
        printf("\n2. Insert At Last Place");
        printf("\n3. Insert At Any Place");
        printf("\n4. Display The entered Elements");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: insertFront();
                break;

        case 2: insertEnd();
                break;

        case 3: insertPosition();
                break;

        case 4: display();
                break;

        case 5: exit(1);
                break;

        default: printf("Wrong choice!!!!!!\n");
        }
    }
    return 0;
}
