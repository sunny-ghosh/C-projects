#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i=1;
 clrscr();
 printf("Enter the value of n : ");
 scanf("%d",&n);
 printf("The first n natural numbers are :-\n");
 while(i<=n)
 {
  printf("%d,",i);
  i=i++;
 }
 getch();
}