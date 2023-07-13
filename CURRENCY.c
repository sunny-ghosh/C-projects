#include<stdio.h>
#include<conio.h>
void main()
{
 int r,a,b,c,d,e,f,g,h,i,j;
 clrscr();
 printf("Enter the amount==>");
 scanf("%d",&r);
 a=(r/2000);
 printf("The total number of notes of 2000 rupees is %d.\n",a);
 a=(r%2000);
 b=(a/500);
 printf("The total number of notes of 500 rupees is %d.\n",b);
 b=(a%500);
 c=(b/200);
 printf("The total number of notes of 200 rupees is %d.\n",c);
 c=(b%200);
 d=(c/100);
 printf("The total number of notes of 100 rupees is %d.\n",d);
 d=(c%100);
 e=(d/50);
 printf("The total number of notes of 50 rupees is %d.\n",e);
 e=(d%50);
 f=(e/20);
 printf("The total number of notes of 20 rupees is %d.\n",f);
 f=(e%20);
 g=(f/10);
 printf("The total number of notes/coins of 10 rupees is %d.\n",g);
 g=(f%10);
 h=(g/5);
 printf("The total number of notes/coins of 5 rupees is %d.\n",h);
 h=(g%5);
 i=(h/2);
 printf("The total number of coins of 2 rupees is %d.\n",i);
 i=(h%2);
 j=(i/1);
 printf("The total number of coins of 1 rupee is %d.",j);
 getch();
}
