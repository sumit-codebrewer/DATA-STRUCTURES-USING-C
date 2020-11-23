/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 5
int front=-1,rear=-1;
int cq[MAX];
int i,val;
void insertion()
{
    int num;
    printf("Enter a number to be inserted:");
    scanf("%d",&num);
    if(front==0&&rear==MAX-1)
    {
        printf("Circular Queue is full!!!");
    }else if(front==-1&&rear==-1)   //First insertion
    {
        front=0;
        rear=0;
        cq[rear]=num;
    }else if(rear==MAX-1&&front!=0)  //Initial positions are vacant for insertion due to deletion at front
    {
        rear=0;
        cq[rear]=num;
    }else{                  //Common insertion after that
        rear++;
        cq[rear]=num;
    }
}
void deletion()
{
    if(front==-1&&rear==-1)
    {
        printf("Circular Queue is empty!!!");
    }else{
        val=cq[front];
        if(front==rear)
        {
            front=rear=-1;
        }else{
            if(front==MAX-1)
            {
                front=0;
            }else{
                front++;
            }
        }
         printf("Value deleted is %d",val);
    }

}
void display()
{
    if(front==-1||rear==-1)
    {
        printf("Circular Queue is empty!!!");
    }else{
        if(front<rear)   //Linear Queue
        {
            for(i=front;i<=rear;i++)
            {
                printf("%d,",cq[i]);
            }
        }else{             //Circular Queue
            for(i=front;i<=MAX-1;i++)
            {
                printf("%d,",cq[i]);
            }
            for(i=0;i<=rear;i++)
            {
                printf("%d,",cq[i]);
            }
        }
    }
    
}
int main()
{
    int ch;
    do{
        printf("\nMAIN MENU FOR CIRCULAR QUEUE");
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Display");
        printf("\n4.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertion();
                   break;
            case 2:deletion();
                   break;
            case 3:display();
                   break;
            case 4:break;
            default:printf("Wrong choice!!");
        }
    }while(ch!=4);

    return 0;
}

