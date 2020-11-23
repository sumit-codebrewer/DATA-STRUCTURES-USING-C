/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *start,*one,*two,*three;
    one=(struct node *)malloc(sizeof(struct node));
    two=(struct node *)malloc(sizeof(struct node));
    three=(struct node *)malloc(sizeof(struct node));
    
    one->data=10;
    one->next=two;
    
    two->data=20;
    two->next=three;
    
    three->data=30;
    three->next=NULL;
    
    printf("\n%d",one->data);
    printf("\n%d",two->data);
    printf("\n%d",three->data);
    
    printf("\n%d",one->next);
    printf("\n%d",two->next);
    printf("\n%d",three->next);
    return 0;
}
