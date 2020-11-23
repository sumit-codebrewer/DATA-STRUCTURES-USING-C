/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Deletion and Display
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
void del_beg()
{
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        head=head->next;
    }
}
void del_mid()
{
    struct node *temp1,*temp2;
    int val;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        printf("\nEnter the value you want to delete:");
        scanf("%d",&val);
        if(val==head->data)
        {
            del_beg();
        }
        else
        {
            temp1=head;
            temp2=temp1->next;
            while((temp1->next)->data!=val)
            {
                temp1=temp1->next;
                temp2=temp2->next;
            }
            temp2=temp2->next;
            temp1->next=temp2;
        }
    }
}
void del_end()
{
    struct node *temp1,*temp2;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        temp1=head;
        temp2=temp1->next;
        while((temp2->next)!=NULL)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=NULL;
    }
}
int main()
{
    int ch;
    do
    {
        printf("\nMAIN MEU FOR SINGLY LINKED LIST");
        printf("\n1.Create");
        printf("\n2.Deletion at beginning");
        printf("\n3.Deletion at middle");
        printf("\n4.Deletion at end");
        printf("\n5.Display");
        printf("\n6.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:del_beg();
                   break;
            case 3:del_mid();
                   break;
            case 4:del_end();
                   break;
            case 5:display();
                   break;
            case 6:break;
            default:printf("\nWrong choice!!!");
        }
    }while(ch!=6);
    return 0;
}
