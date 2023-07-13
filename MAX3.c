#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter the 3 numbers==>");
 scanf("%d%d%d",&a,&b,&c);
 if((a>b)&&(a>c))
 {
  printf("%d,The first number is maximum.",a);
 }
 else if((b>a)&&(b>c))
 {
  printf("%d,The second number is maximum.",b);
 }
 else
 {
  printf("%d,The third number is maximum.",c);
 }
 getch();
}