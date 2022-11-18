#include <stdio.h>
#define Stack_size 5
int top, item, st[10],i;
top=-1;

void push()
{
    if (top==Stack_size-1)
    printf("STACK OVERFLOW\n\n\n");
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
    printf("STACK UNDERFLOW\n");
    else
    {
        del_item = st[top];
        top--;
        return del_item;
    }
}

void display()
{
    if(top==-1)
    printf("Stack empty. There is nothing to display\n");
    
    for(i=0;i<=top;i++)
        printf(" %d ", st[i]);
}

int main()
{
    int op;
    while(1)
    {
        printf("\nEnter the operation\n 1.PUSH  2. POP  3. DISPLAY\n");
        scanf("%d", &op);
        
        switch(op)
        {
            case 1: printf("Enter the number : ");
                    scanf("%d", &item);
                    push();
                    break;
                    
            case 2: pop(); 
                    break;
                   
            case 3: display();
                    break;
                    
            default: printf("Invalid input\n\n");        
                     break;   
        }
    }
    
    return 0;
}
