// Q: W.A.P in C to check whether a number is Palindrome or not. //

#include<stdio.h>
int main()
{
 int n,digit,sum=0,temp;
 printf("Enter the number==> ");
 scanf("%d",&n);
 temp=n;
 while(temp>0)
 {
  digit=(temp%10);
  sum=(sum*10)+digit;
  temp=(temp/10);
 }
 if(sum==n)
 {
  printf("%d is a Palindrome Number.",n);
 }
 else
 {
  printf("%d is not a Palindrome Number.",n);
 }
 return 0;
}
