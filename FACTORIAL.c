#include<stdio.h>
#include<conio.h>
void main()
{
 long int i,n,fact=1;
 clrscr();
 printf("Enter the number==>");
 scanf("%ld",&n);
 for(i=n;i>=1;i--)
 {
  fact=fact*i;
 }
 printf("The factorial of %ld is %ld .",n,fact);
 getch();
}