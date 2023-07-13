#include<stdio.h>
#include<conio.h>
void main()
{
 int l,b,a,p;
 clrscr();
 printf("Enter the value of the length of the rectangle==>");
 scanf("%d",&l);
 printf("Enter the value of the breadth of the rectangle==>");
 scanf("%d",&b);
 a=(l*b);
 p=2*(l+b);
 printf("The area of the rectangle is %d.\n",a);
 printf("The perimeter of the rectangle is %d.",p);
 getch();
}