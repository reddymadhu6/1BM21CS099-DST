/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define Qsize 5

void insert_rear(int q[],int *r,int item)
{
    if(*r==Qsize-1)
    printf("Queue overflow\n");
    else
    {
         (*r)++;
         q[*r]=item;
    }
}

int delete_front(int q[],int *r,int *f)
{
    int del_item;
    if(*f>*r)
    printf("Queue underflow\n");
    else
    {
        del_item=q[*f];
        (*f)++;
        return del_item;
    }
}

void display(int q[],int *r,int *f)
{
    int i;
    if(*f>*r)
    {
    printf("Queue underflow\n");
    }
    else
    {
        for(i=*f;i<=*r;i++)
       { printf("%d \n",q[i]);
       }
    }
}

int main()
{
    int q[Qsize];
    int choice,*r=-1,f=0;
    int data;
    while(1)
    {
        printf("1.To Enter \n 2.To delete \n 3.To display\n 4.To Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the value to insert\n");
                   scanf("%d",&data);
                   insert_rear(q,&r,data);
                   break;
            
            case 2:printf("the deleted value is:%d \n",delete_front(q,&r,&f));
                   break;
            
            case 3:display(q,&r,&f);
                   break;
                   
            case 4:exit(0);
            
        }
        
    }
    return 0;
}
