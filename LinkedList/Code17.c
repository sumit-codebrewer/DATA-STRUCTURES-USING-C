/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
                        //Deletion and Display in Singly Circular LinkedList
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
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
        NN->next=NULL;
        if(head==NULL)
        {
            head=NN;
            current=NN;
            head->next=head;
        }
        else
        {
            current->next=NN;
            current=NN;
            current->next=head;
        }
        printf("\nDo you want to continue?(1 for Yes 0 for No):");
        scanf("%d",&ch);
    }while(ch!=0&&ch==1);
}
void del_beg()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        head=head->next;
        temp->next=head;
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
        printf("\nEnter the value you want to delete:");
        scanf("%d",&val);
        if(val==head->data)
        {
            del_beg();
        }
        else
        {
            while((temp1->next)->data!=val)
            {
                temp1=temp1->next;
            }
            temp2=(temp1->next)->next;
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
        while(temp2->next!=head)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=head;
    }
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
        while(temp->next!=head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
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

