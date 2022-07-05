//* Q: W.A.P in c to perform the following tasks using switch case.~
// 1. Check whether a number is odd or even.
// 2. Find the maximum between two numbers.
// 3. Check whether a year is leap year or not.
// 4. Find the maximum between three numbers and also calculate their average. *//  

#include<stdio.h>
int main()
{
 int ch,n1,n2,n3,y,n;
 float avg;
 printf("(i)   Enter 1 for checking whether a number is odd or even.\n(ii)  Enter 2 to find the maximum between two numbers.\n(iii) Enter 3 for leap year checking.\n(iv)  Enter 4 to find the maximum between three numbers and their average.\n");
 printf("Enter your choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1 :
	  printf("Enter the number==>");
	  scanf("%d",&n);
	  if(n%2==0)
	  {
	   printf("%d is an even number.",n);
	  }
	  else
	  {
	   printf("%d is not an even number",n);
	  }
	  break;
  case 2 :
	  printf("Enter the 2 numbers==>");
	  scanf("%d%d",&n1,&n2);
	  if(n1>n2)
	  {
	   printf("%d,The first number is maximum.",n1);
	  }
	  else
	  {
	   printf("%d,The second number is maximum.",n2);
	  }
	  break;
  case 3 :
	  printf("Enter the Year==>");
	  scanf("%d",&y);
	  if(y%100==0)
	  {
	   if(y%400==0)
	   {
	    printf("%d is a Leap Year",y);
	   }
	   else
	   {
	    printf("%d is not a Leap Year",y);
	   }
	  }
	  else
	  {
	   if(y%4==0)
	   {
	    printf("%d is a Leap Year",y);
	   }
	   else
	   {
	    printf("%d is not a Leap Year",y);
	   }
	  }
	  break;
  case 4 :
	  printf("Enter the 3 numbers==>");
	  scanf("%d%d%d",&n1,&n2,&n3);
	  if((n1>n2)&&(n1>n3))
	  {
	   printf("%d,The first number is maximum.\n",n1);
	  }
	  else if((n2>n1)&&(n2>n3))
	  {
	   printf("%d,The second number is maximum.\n",n2);
	  }
	  else
	  {
	   printf("%d,The third number is maximum.\n",n3);
	  }
	  avg=(n1+n2+n3)/3.0;
	  printf("The average of those number is %f.",avg);
	  break;
  default:
	  printf("You have entered the wrong input.");
 }
 return 0;
}