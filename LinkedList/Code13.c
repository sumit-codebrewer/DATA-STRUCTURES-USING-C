/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
    struct node *prev;
}*head=NULL;
struct node1
{
    struct node1 *next;
    int data;
    struct node1 *prev;
}*head1=NULL;
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
void create1()
{
    int ch,val;
    do
    {
        struct node1 *NN,*current;
        NN=(struct node1 *)malloc(sizeof(struct node1));
        printf("\nEnter data:");
        scanf("%d",&val);
        NN->data=val;
        NN->prev=NULL;
        NN->next=NULL;
        if(head1==NULL)
        {
            head1=NN;
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
void display(struct node *st)
{
    struct node *temp;
        temp=st;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
   
}
void merge()
{
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head1;
    head1->prev=temp->next;
    printf("\nCombined LinkedList:");
    display(head);
}
int main()
{
    int ch;
    do
    {
        printf("\n1.Create LinkedList 1");
        printf("\n2.Create LinkedList 2");
        printf("\n3.Display LinkedList 1");
        printf("\n4.Display LinkedList 2");
        printf("\n5.Merge");
        printf("\n6.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:create1();
                   break;
            case 3:display(head);
                   break;
            case 4:display(head1);
                   break;
            case 5:merge();
                   break;
            case 6:break;
            default:printf("\nWrong choice!!!");
        }
    }while(ch!=6);


    return 0;
}


