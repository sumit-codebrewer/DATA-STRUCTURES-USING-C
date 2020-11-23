/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
                               //Insertion and Display in DLL
#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
    struct node *prev;
}*head=NULL;
void create()
{
    int ch,val;
    do
    {
        struct node *NN,*current;
        NN=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d",&val);
        NN->data=val;
        NN->prev=NULL;
        NN->next=NULL;
        if(head==NULL)
        {
            head=NN;
            current=NN;
        }
        else
        {
            current->next=NN;
            NN->prev=current;
            current=NN;
        }
        printf("\nDo you want to continue?(1 for Yes 0 for No):");
        scanf("%d",&ch);
    }while(ch!=0&&ch==1);
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
        head->prev=NULL;
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
        temp1=head;
        printf("\nEnter the number you want to delete:");
        scanf("%d",&val);
        while((temp1->next)->data!=val)
        {
            temp1=temp1->next;
        }
        temp2=(temp1->next)->next;
        temp1->next=temp2;
        temp2->prev=temp1;
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
        while(temp2->next!=NULL)
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
        printf("\n1.Create");
        printf("\n2.Delete at beginning");
        printf("\n3.Delete at middle");
        printf("\n4.Delete at end");
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

