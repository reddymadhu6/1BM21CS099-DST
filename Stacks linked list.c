#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *next;
};

typedef struct node *NODE;

NODE getnode()
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	if (temp==NULL)
	{
		printf("Memory not allocated\n");
		return NULL;
	}
	
	return temp;
}

NODE insert_beg(int item,NODE first)
{
	NODE new;
	new=getnode();
	new->value=item;
	new->next=NULL;
	if(first==NULL)
	{
		return new;
	}
	else
	{
		new->next=first;
		first=new;
		return first;
	}
}

NODE delete_beg(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("Empty\n");
        return NULL;
    }
    temp=first;
    temp=temp->next;
    printf("Deleted element is= %d",first->value);
    free(first);
    return temp;
}


void display(NODE first)
{
	NODE temp;
	temp=first;
	while(temp!=NULL)
	{
		printf("Element stored= %d\n",temp->value);
		temp=temp->next;
	}
}

void main()
{
	NODE first=NULL;
	int choice,pos,item;
	printf("\nStacks\n");
	while(1)
	{
        printf("\n1.Insert \n2.delete \n3.Display \n4.Exit\n");
		printf("\nRead choice\n");
		scanf("%d",&choice);
		
		switch(choice)
        {
            case 1:printf("\nEnter the value :\n");
			       scanf("%d",&item);
			       first=insert_beg(item,first);
                   break;

            case 2:first=delete_beg(first);
                   break;
            
            case 3:display(first);
			       break;

            default:printf("\nExited\n");
                    exit(0);
			        
		}
		
	}
}
