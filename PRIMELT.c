#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("The Prime Numbers between 100 to 300 are :-\n");
 for(n=100;n<=300;n++)
 {
  for(i=2;i<=n;i++)
  {
   if(n%i==0)
   break;
  }
  if(i==n)
  {
   printf("%d\t",n);
  }
 }
 getch();
}