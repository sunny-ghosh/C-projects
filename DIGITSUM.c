#include<stdio.h>
#include<conio.h>
void main()
{
 int n,digit,sum=0;
 clrscr();
 printf("Enter the number==>");
 scanf("%d",&n);
 while(n>0)
 {
  digit=(n%10);
  sum=(sum+digit);
  n=(n/10);
 }
 printf("The sum of the digits of the given number is %d .",sum);
 getch();
}
