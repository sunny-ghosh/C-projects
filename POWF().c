#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int i,n,num;
 clrscr();
 printf("Enter the number==>");
 scanf("%d",&n);
 printf("The given series upto %d are :-\n",n);
 for(i=1;i<=n;i++)
 {
  num=pow(i,2);
  printf("%d\t",num);
 }
 getch();
}