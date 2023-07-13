#include<stdio.h>
#include<conio.h>
void main()
{
 void swap();
 clrscr();
 swap();
 getch();
}
void swap()
{
 int a,b;
 printf("Enter the first numbers before swaping==>");
 scanf("%d",&a);
 printf("Enter the second number before swaping==>");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("After swaping the first number is==>%d\n",a);
 printf("After swaping the second number is==>%d",b);
}
