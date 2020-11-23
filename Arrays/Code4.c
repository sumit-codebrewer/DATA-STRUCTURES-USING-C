/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b[3][3]={{7,8,9},{5,2,6},{1,2,4}};

int i=3,j=3,m=3,n=3;
void addition()
{
  int c[3][3],sum=0;
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	    {
	        sum=a[i][j]+b[i][j];
	        c[i][j]=sum;
	        printf("%d  ",c[i][j]);
	    }
      printf("\n\n");
    }
}
void subtraction()
{
  int c[3][3],difference= 0;
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	    {
	        difference=a[i][j]-b[i][j];
	        c[i][j]=difference;
	        printf("%d  ",c[i][j]);
	    }
      printf("\n\n");
    }
}
void multiplication ()
{
  int c[3][3],sum=0;
  for(i=0;i <m;i++)
    {
      for(j=0;j<n;j++)
	    {
	        for(int k = 0;k<m;k++)
    	    {
	          sum+=a[i][j]*b[i][j];
	          c[i][j]=sum;
	        }
	    }
    }
    for(i=0;i <m;i++)
    {
      for(j=0;j<n;j++)
	    {
	        printf("%d  ",c[i][j]);
	    }
	    printf("\n\n");
    }
}

int main ()
{
  int ch;
  do
    {
      printf("\n_____Main menu for matrix operations");
      printf("\n1.Addition");
      printf("\n2.Subtraction");
      printf("\n3.Multiplication");
      printf("\n4.Exit");

      printf("\nEnter choice:");
      scanf("%d",&ch);
      switch(ch)
	    {
	        case 1:addition();
	               break;
	        case 2:subtraction();
	               break;
	        case 3:multiplication();
	               break;
	        case 4:break;
	        default:printf("\nWrong choice");
	    }
    }while(ch!=4);
  return 0;
}

