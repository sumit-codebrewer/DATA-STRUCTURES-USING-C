/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
int val,i;
void enqueue()
{
    printf("\nEnter the element you want to insert:");
    scanf("%d",&val);
    if(rear==MAX-1)
    {
        printf("\nQueue is full!!!");
    }
    else if(front=-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=val;
    }
    else
    {
        rear++;
        queue[rear]=val;
    }
}
void dequeue()
{
    if(front<0||front>rear)
    {
        printf("\nQueue is empty!!!");
    }
    else
    {
        val=queue[front];
        front++;
    }
    printf("\nValue deleted is %d",val);
}
void peek()
{
    printf("\nElement at the front is %d",queue[front]);
}
void display()
{
    for(i=front;i<=rear;i++)
    {
        printf("\n%d",queue[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n_____MAIN MENU FOR LINEAR QUEUE_____");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                   break;
            case 2:dequeue();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:break;
            default:printf("\nWrong choice");
        }
    }while(ch!=5);

    return 0;
}

