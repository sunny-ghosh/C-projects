#include<stdio.h>
#include<conio.h>
void main()
{
 int b,p,age;
 clrscr();
 printf("Enter the year of birth==>");
 scanf("%d",&b);
 printf("Enter the present year==>");
 scanf("%d",&p);
 age=(p-b);
 printf("The age is %d\n",age);
 if(age>=18)
 {
  printf("Eligible to vote");
 }
 else
 {
  printf("Not eligible to vote");
 }
 getch();
}