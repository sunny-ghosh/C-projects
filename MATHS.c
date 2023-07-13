#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,n,sum,sub,mulp,div;
 clrscr();
 printf("Enter the first number==>");
 scanf("%d",&a);
 printf("Enter the second number==>");
 scanf("%d",&b);
 printf("(i)   Enter 1 for the addition.\n(ii)  Enter 2 for substraction.\n(iii) Enter 3 for the multiplication.\n(iv)  Enter 4 for the division.\n");
 printf("Enter your choice : ");
 scanf("%d",&n);
 switch(n)
 {
  case 1 :
	  {
	   sum=(a+b);
	   printf("The required sum of those numbers is %d.\n",sum);
	  }
  case 2 :
	  {
	   sub=(a-b);
	   printf("The required difference between those numbers is %d.\n",sub);
	  }
  case 3 :
	  {
	   mulp=(a*b);
	   printf("The required product of those numbers is %d.\n",mulp);
	  }
  case 4 :
	  {
	   div=(a/b);
	   printf("The required quotient is %d.",div);
	  }
	  break;
  default:
	  {
	   printf("You have entered the wrong input.");
	   break;
	  }
 }
 getch();
}