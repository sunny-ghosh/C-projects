#include<stdio.h>
#include<conio.h>
void main()
{
 int i,sum=0;
 clrscr();
 for(i=1;i<=100;i++)
 {
  if(i%2==0)
  {
   sum=sum+i;
  }
 }
 printf("The Sum of the all Even Numbers between 1 to 100 is :- %d",sum);
 getch();
}