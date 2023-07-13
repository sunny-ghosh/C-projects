#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n1,n2;
 clrscr();
 printf("Enter the first number : ");
 scanf("%d",&n1);
 printf("Enter the second number : ");
 scanf("%d",&n2);
 for(i=(n1<n2)?n1:n2;i>=1;i--)
 {
  if((n1%i==0)&&(n2%i==0))
  break;
 }
 for(j=(n1>n2)?n1:n2;j<=(n1*n2);j++)
 {
  if((j%n1==0)&&(j%n2==0))
  break;
 }
 printf("The required G.C.D. of %d and %d is %d .\nThe required L.C.M. of %d and %d is %d .",n1,n2,i,n1,n2,j);
 getch();
}