#include <stdio.h>
#define STACK_SIZE 5

int st[10],top,item,i;
top=-1;

void push()
{
    if(top==STACK_SIZE-1)
    printf("Stack overflow\n\n");
    else
    {
        top++;
        st[top]=item;
    }
}

int pop()
{
    int del_item;
    if(top==-1)
    printf("Stack underflow\n");
    else
    {
        del_item=st[top];
        top--;
        return del_item;
    }
}

void display()

{
    if(top==-1)
    printf("Stack is empty\n");

for(i=0;i<=top;i++)
printf("%d\t",st[i]);
}

void main()
{
    int choice;
   while(1)
   {
        printf("Enter the choice\n");
       printf("1.Push\t2.pop\t3.Display\n");
       
       scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter the number\n");
               scanf("%d",&item);
               push();
               break;
               
        case 2:pop();
               break;
            
        case 3:display();
               break;
        
        default:printf("Invalid input\n\n");
    }
   }
}