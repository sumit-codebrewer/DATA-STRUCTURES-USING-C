/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a[]={1,3,5,7,9,13,15};
int size=7,i;
void del_beg()
{
    for(i=0;i<size;i++)
    {
        a[i]=a[i+1];
    }
    size=size-1;
}
void del_mid()
{
    int pos;
    printf("\nEnter position:");
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size=size-1;
}
void del_end()
{
    size=size-1;
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
        printf("\n_______Main menu for Deletion_____");
        printf("\n1.Deletion at beginning");
        printf("\n2.Deletion at mid");
        printf("\n3.Deletion at end");
        printf("\n4.Display");
        printf("\n5.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:del_beg();
                   break;
            case 2:del_mid();
                   break;
            case 3:del_end();
                   break;
            case 4:display();
                   break;
            case 5:break;
            default:printf("\nWrong choice");
        }
    }while(ch!=5);

    return 0;
}

