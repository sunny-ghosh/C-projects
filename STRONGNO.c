#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int getfactorial(int);
 clrscr();
 int num,i,temp,sum=0;
 printf("Enter a number==>");
 scanf("%d",&num);
 temp=num;
 while(temp>0)
 {
  i=temp%10;
  sum=sum+getfactorial(i);
  temp=temp/10;
 }
 if(sum==num)
 {
  printf("%d is a Strong Number.",num);
 }
 else
 {
  printf("%d is not a Strong Number.",num);
 }
 getch();
}
int getfactorial(int number)
{
 int fact=1,i;
 for(i=1;i<=number;i++)
 {
  fact=fact*i;
 }
 return fact;
}