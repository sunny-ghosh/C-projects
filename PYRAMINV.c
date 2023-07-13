#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,n;
 clrscr();
 printf("Enter the number of lines you want to print==>");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 {
  for(j=i;j<=n;j++)
  {
   printf("%c",' ');
  }
  for(k=(2*i-1);k>=1;k--)
  {
   printf("%c",'*');
  }
  printf("\n");
 }
 getch();
}
