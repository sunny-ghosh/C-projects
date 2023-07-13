#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter the number==>");
 scanf("%d",&n);
 printf("The given series upto %d are :-\n",n);
 for(i=1;i<=n;i++)
 {
  printf("%d\t",i);
 }
 getch();
}