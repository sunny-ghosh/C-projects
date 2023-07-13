#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("Enter the number==>");
 scanf("%d",&n);
 printf("The Prime Factors of %d are :-\n",n);
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   for(j=2;j<=i;j++)
   {
    if(i%j==0)
    break;
   }
   if(j==i)
   {
    printf("%d\t",i);
   }
  }
 }
 getch();
}