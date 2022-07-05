// W.A.P in C to print all the even numbers within the given range. //  

#include<stdio.h>
int main()
{
 int i,l,h;
 printf("Enter the starting point of the range : ");
 scanf("%d",&l);
 printf("Enter the ending point of the range : ");
 scanf("%d",&h);
 printf("All the even numbers within the given range are :-\n");
 for(i=l;i<=h;i++)
 {
  if(i%2==0)
  {
   printf("%d, ",i);
  }
 }
 return 0;
}