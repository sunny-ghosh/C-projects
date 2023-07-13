#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i=1,sum=0;
 clrscr();
 printf("Enter the value of n : ");
 scanf("%d",&n);
 while(i<=n)
 {
  sum=sum+i;
  i=i++;
 }
 printf("The sum of the first n numbers is %d .",sum);
 getch();
}