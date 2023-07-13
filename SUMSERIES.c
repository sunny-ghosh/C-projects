#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int i,n,num,sum=0;
 clrscr();
 printf("Enter the number==>");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  num=pow(i,2);
  sum=(sum+num);
 }
 printf("The sum of the given series upto %d is %d.",n,sum);
 getch();
}