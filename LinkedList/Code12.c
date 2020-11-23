/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
                                        //Searching and Display                                        
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
void search()
{
    struct node *temp;
    int found=0,index=0,val;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty");
    }
    else
    {
        printf("\nEnter the element you want to search:");
        scanf("%d",&val);
        temp=head;
        while(temp->next!=NULL)
        {
            if(temp->data==val)
            {
                found++;
                printf("\nElement found at %d position",(index+1));
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
int main()
{
    int ch;
    do
    {
        printf("\n1.Create");
        printf("\n2.Display");
        printf("\n3.Search");
        printf("\n4.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:display();
                   break;
            case 3:search();
                   break;
            case 4:break;
            default:printf("\nWrong choice!!!");
        }
    }while(ch!=4);
return 0;
}
