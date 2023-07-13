#include<stdio.h>
#include<conio.h>
void main()
{
 int a1,a2,a3,total;
 clrscr();
 printf("Enter the values of the three angles of a triangle : ");
 scanf("%d%d%d",&a1,&a2,&a3);
 total=(a1+a2+a3);
 if(total==180)
 {
  printf("The triangle is valid.");
 }
 else
 {
  printf("The triangle is not valid.");
 }
 getch();
}