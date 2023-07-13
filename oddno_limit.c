#include<stdio.h>
#include<conio.h>
void main()
{
 int i,l,u;
 clrscr();
 printf("Enter the lower limit of the range : ");
 scanf("%d",&l);
 printf("Enter the upper limit of the range : ");
 scanf("%d",&u);
 printf("All Odd Numbers in the given range are :-\n");
 for(i=l;i<=u;i++)
 {
  if(i%2!=0)
  {
   printf("%d , ",i);
  }
 }
 getch();
}