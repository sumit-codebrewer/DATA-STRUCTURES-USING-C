/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
                   //Insertion and Display in Doubly Circular LinkedList
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
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
        NN->next=NULL;
        NN->prev=NULL;
        if(head==NULL)
        {
            head=NN;
            current=NN;
            head->next=head;
            head->prev=head;
        }
        else
        {
            current->next=NN;
            NN->prev=current;
            current=NN;
            current->next=head;
            head->prev=current;
        }
        printf("\nDo you want to continue?(1 for Yes 0 for No):");
        scanf("%d",&ch);
    }while(ch!=0&&ch==1);
}
void insert_beg()
{
    struct node *NN,*temp;
    int val;
    NN=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value you want to insert:");
    scanf("%d",&val);
    NN->data=val;
    NN->next=NULL;
    NN->prev=NULL;
    if(head==NULL)
    {
        head=NN;
        head->next=head;
        head->prev=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=NN;
        NN->prev=temp;
        NN->next=head;
        head->prev=NN;
        head=NN;
    }
}
void insert_mid()
{
    struct node *NN,*temp1,*temp2;
    int val,position;
    NN=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value you want to insert:");
    scanf("%d",&val);
    NN->data=val;
    NN->next=NULL;
    NN->prev=NULL;
    if(head==NULL)
    {
        head=NN;
        head->next=head;
        head->prev=head;
    }
    else
    {
        temp1=head;
        temp2=temp1->next;
        printf("\nEnter the position at which you want to insert:");
        scanf("%d",&position);
        for(int i=0;i<position-2;i++)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=NN;
        NN->prev=temp1;
        NN->next=temp2;
    }
}
void insert_end()
{
    struct node *NN,*temp;
    int val,position;
    NN=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value you want to insert:");
    scanf("%d",&val);
    NN->data=val;
    NN->next=NULL;
    if(head==NULL)
    {
        head=NN;
        head->next=head;
        head->prev=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=NN;
        NN->prev=temp;
        NN->next=head;
        head->prev=NN;
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
       printf("\n2.Insert at beginning");
       printf("\n3.Insert at middle");
       printf("\n4.Insert at end");
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
            case 4:insert_end();
                   break;
            case 5:display();
                   break;
            case 6:break;
           default:printf("\nWrong choice!!!");
       }
   }while(ch!=6);

    return 0;
}

