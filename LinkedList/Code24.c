/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
                                //Polynomial Representation
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int coeff;
    int expo;
    struct node *next;
}*head=NULL;
void create()
{
    printf("\nCreation of Expression");
    struct node *NN,*current;
    int deg;
    printf("\nEnter the degree of expression:");
    scanf("%d",&deg);
    while(deg>-1)
    {
        NN=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the coeffecient of X^%d:",deg);
        scanf("%d",&NN->coeff);
        NN->expo=deg;
        NN->next=NULL;
        if(head==NULL)
        {
            head=NN;
            current=NN;
        }
        else
        {
            current->next=NN;
            current=NN;
        }
        deg--;
    }
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            printf("%dX^%d+",temp->coeff,temp->expo);
        }
        else
        {
            printf("%dX^%d",temp->coeff,temp->expo);
        }
        temp=temp->next;
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n_______Polynomial Representation________");
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

