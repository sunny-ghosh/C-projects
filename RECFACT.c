#include<stdio.h>
#include<conio.h>
void main()
{
 int fact(int);
 clrscr();
 int n,f;
 printf("Enter the number==>");
 scanf("%d",&n);
 if(n>=0)
 {
  f=fact(n);
  printf("The factorial of %d is %d .",n,f);
 }
 else
 {
  printf("ERROR! The number should be positive to get factorial.");
 }
 getch();
}
int fact(int x)
{
 int f;
 if((x==0)||(x==1))
 {
  return 1;
 }
 else
 {
  f=x*fact(x-1);
  return f;
 }
}
