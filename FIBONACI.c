#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,old=0,ne=1,next;
 clrscr();
 printf("Enter the number as the range of the series==>");
 scanf("%d",&n);
 printf("The fibonacci series in the given range :-\n%d\t%d",old,ne);
 for(i=1;i<=n-2;i++)
 {
  next=(old+ne);
  printf("\t%d",next);
  old=ne;
  ne=next;
 }
 getch();
}