/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Searching and traversing
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
        printf("\nDo you want to continue?(1 for YES | O for NO):");
        scanf("%d",&ch);
    }while(ch!=0);
}
void search()
{
    struct node *temp;
    int found=0,val,index=0;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
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
                break;
            }
            temp=temp->next;
            index++;
        }
        if(found==0)
        {
            printf("\nNOT FOUND!!!");
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
        printf("\nMAIN MENU FOR SINGLY LINKED LIST");
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
