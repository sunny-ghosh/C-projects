// W.A.P in c to check whether the entered number is armstrong or not. //  

#include<stdio.h>
int main()
{
 int num,temp,digit,sum=0;
 printf("Enter the number==> ");
 scanf("%d",&num);
 temp=num;
 while(temp>0)
 {
  digit=(temp%10);
  sum=sum+(digit*digit*digit);
  temp=(temp/10);
 }
 if(sum==num)
 {
  printf("%d is a Armstrong Number.",num);
 }
 else
 {
  printf("%d is not a Armstrong Number.",num);
 }
 return 0;
}
