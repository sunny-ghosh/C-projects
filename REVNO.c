#include<stdio.h>
#include<conio.h>
void main()
{
 long int n,digit,sum=0;
 clrscr();
 printf("Enter the number==>");
 scanf("%ld",&n);
 while(n>0)
 {
  digit=(n%10);
  sum=(sum*10)+digit;
  n=(n/10);
 }
 printf("The reverse of the given number is %ld .",sum);
 getch();
}
