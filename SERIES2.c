#include<stdio.h>
#include<conio.h>
void main()
{
 int i=10,n;
 clrscr();
 printf("Enter the number==>");
 scanf("%d",&n);
 printf("The given series upto %d are :-\n",n);
 while(i<=n)
 {
  printf("%d\t",i);
  i=i+10;
 }
 getch();
}