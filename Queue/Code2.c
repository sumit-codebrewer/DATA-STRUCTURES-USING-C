/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 5
int dequeue[MAX];

int front=-1,rear=-1;
int val,i;
void insert_rear()
{
    printf("Enter element to be inserted:");
    scanf("%d",&val);
    if(rear==MAX-1)
    {
        printf("Element cannot be inserted as dequeue is full");
    }else if(front==-1||rear==-1){
      front=0;
      rear=0;
      dequeue[rear]=val;
    }else{
        rear++;
        dequeue[rear]=val;
    }
}
void display()
{
    for(i=front;i<=rear;i++)
    {
        printf("%d,",dequeue[i]);
    }
}
void delete_front()
{
    if(front<0||front>rear)
    {
        printf("Element cannot be deleted as dequeue is empty");
    }else{
       printf("Value deleted is %d",dequeue[front]);
       front++;
    }
}
void delete_rear()
{
    if(front<0||front>rear)
    {
        printf("Element cannot be deleted as dequeue is empty");
    }else{
       printf("Value deleted is %d",dequeue[rear]);
       rear--;
    }
}
int main()
{
    int ch;
    do{
        printf("\nMENU FOR DEQUEUE"); //Input Restricted Dequeue
        printf("\n 1. To insert at rear");  //Insertion only at one end
        printf("\n 2. To delete from front");
        printf("\n 3. To delete from rear");
        printf("\n 4.To display all the dequeue elements");
        printf("\n 5. To exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_rear();
                   break;
            case 2:delete_front();
                   break;
            case 3:delete_rear();
                   break;
            case 4:display();  
                   break;
            case 5:break;
            default:printf("Wrong choice!!!");
        }
    }while(ch!=5);

    return 0;
}

