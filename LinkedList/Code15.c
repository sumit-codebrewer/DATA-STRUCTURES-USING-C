/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
                    //Creation and Display in Singly Circular LinkedList
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
       printf("\n2.Display");
       printf("\n3.Exit");
       
       printf("\nEnter choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:create();
                  break;
           case 2:display();
                  break;
           case 3:break;
           default:printf("\nWrong choice!!!");
       }
       
   }while(ch!=3);

    return 0;
}

