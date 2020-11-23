/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void create()
{
    int val,ch;
    do
    {
        struct node *new_node,*current;
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
        printf("\nDo you want to continue?(1 for YES | O for NO");
        scanf("%d",&ch);
    }while(ch!=0);
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void insert_beg()
{
    struct node *new_node,*current;
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
            current=new_node;
        }
        else
        {
            new_node->next=head;
            head=new_node;
        }
}
void insert_last()
{
    struct node *new_node,*current;
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
            current=new_node;
        }
        else
        {
            current=head;
            while((current->next)!=NULL)
            {
                current=current->next;
            }
            current->next=new_node;
        }
}
void insert_mid()
{
    struct node *new_node,*current,*temp1,*temp2;
    int position;
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
            current=new_node;
        }
        else
        {
            temp1=head;
            printf("\nEnter the position at which you want to insert:");
            scanf("%d",&position);
            for(int i=0;i<position-2;i++)
            {
                temp1=temp1->next;
            }
            temp2=temp1->next;
            temp1->next=new_node;
            new_node->next=temp2;
        }
}
int main()
{
    int ch;
    do
    {
        printf("\nMAIN MEU FOR SINGLY LINKED LIST");
        printf("\n1.Create");
        printf("\n2.Insert at beginning");
        printf("\n3.Insert at middle");
        printf("\n4.Insert at last");
        printf("\n5.Display");
        printf("\n6.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:insert_beg();
                   break;
            case 3:insert_mid();
                   break;
            case 4:insert_last();
                   break;
            case 5:display();
                   break;
            case 6:break;
            default:printf("\nWrong choice!!!");
        }
    }while(ch!=6);
    return 0;
}
