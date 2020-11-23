/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
                  //Searching and Display in Doubly Circular LinkedList
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
void search()
{
    struct node *temp;
    int val,found=0,index=0;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        printf("\nEnter the value you want to search:");
        scanf("%d",&val);
        temp=head;
        while((temp->next)!=head)
        {
            if(temp->data==val)
            {
                found++;
                printf("\nElement found at %d position",(index+1));
                break;
            }
            index++;
            temp=temp->next;
        }
        if(found==0)
        {
            printf("\nElement not found!!!");
        }
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
       printf("\n2.Search");
       printf("\n3.Display");
       printf("\n4.Exit");
       
       printf("\nEnter choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:create();
                  break;
           case 2:search();
                  break;
            case 3:display();
                   break;
           case 4:break;
           default:printf("\nWrong choice!!!");
       }
   }while(ch!=4);

    return 0;
}
