/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a[]={1,2,4,6,7};
int size=5,i,x;
void insert_beg()
{
    printf("Enter the element you want to insert:");
    scanf("%d",&x);
    size=size+1;
    for(i=size;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=x;
}
void insert_pos()
{
    int pos;
    size=size+1;
    printf("Enter the element you want to insert:");
    scanf("%d",&x);
    printf("Enter position where you want to insert:");
    scanf("%d",&pos);
    for(i=size-1;i>pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=x;
}
void insert_end()
{
    printf("Enter the element you want to insert:");
    scanf("%d",&x);
    size=size+1;
    a[size-1]=x;
}
void display()
{
    for(i=0;i<size;i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n___Insertion in an array___");
        printf("\n1.Insertion  at beginning");
        printf("\n2.Insertion at a position");
        printf("\n3.Insertion at end");
        printf("\n4.Display");
        printf("\nExit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_beg();
                   break;
            case 2:insert_pos();
                   break;
            case 3:insert_end();
                   break;
            case 4:display();
                   break;
            case 5:break;
            default:printf("\nWrong choice");
        }
    }while(ch!=5);

    return 0;
}

