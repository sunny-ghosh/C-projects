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
 printf("All numbers divisible by 3 or 5 in the given range are :-\n");
 for(i=l;i<=u;i++)
 {
  if((i%3==0)||(i%5==0))
  {
   printf("%d , ",i);
  }
 }
 getch();
}