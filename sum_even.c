#include<stdio.h>
#include<conio.h>
void main()
{
 int i,l,u,sum=0;
 clrscr();
 printf("Enter the lower limit of the range : ");
 scanf("%d",&l);
 printf("Enter the upper limit of the range : ");
 scanf("%d",&u);
 for(i=l;i<=u;i++)
 {
  if(i%2==0)
  {
   sum=sum+i;
  }
 }
 printf("The sum of all Even Numbers in the given range is %d .",sum);
 getch();
}