#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter the first numbers before swaping==>");
 scanf("%d",&a);
 printf("Enter the second number before swaping==>");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("After swaping the first number is==>%d\n",a);
 printf("After swaping the second number is==>%d",b);
 getch();
}
