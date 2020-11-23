/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
                          //Implementation of Queue using LinkedList
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue()
{
    struct node *NN;
    int val;
    NN=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data:");
    scanf("%d",&val);
    NN->data=val;
    NN->next=NULL;
    if(front==NULL)
    {
        front=NN;
        rear=NN;
    }
    else
    {
        rear->next=NN;
        rear=NN;
    }
}
void dequeue()
{
    if(front==NULL)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        front=front->next;
    }
}
void display()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("\nQueue is Empty!!!");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\n4.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                   break;
            case 2:dequeue();
                   break;
            case 3:display();
                   break;
            case 4:break;
            default:printf("\nWrong choice!!!");
        }
    }while(ch!=4);
    return 0;
}

