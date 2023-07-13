#include<stdio.h>
int main()
{
 int n;
 printf("Enter the number : ");
 scanf("%d",&n);
 if((n%10==0)&&(n%12==0))
  printf("The given number is divisible by 10 and 12 .");
 else if((n%10==0)||(n%12==0))
 {
   if(n%5==0)
      printf("%d is divisible by 10",n);
   else
      printf("%d is divisible by 12",n);
 }
 else
  printf("%d is not divisible by 10 and 12 .",n);
 
}