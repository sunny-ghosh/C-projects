#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2;
 clrscr();
 printf("Enter the two numbers==>");
 scanf("%d%d",&n1,&n2);
 if(n1>n2)
 {
  printf("%d,The first number is maximum.",n1);
 }
 else
 {
  printf("%d,The second number is maximum.",n2);
 }
 getch();
}