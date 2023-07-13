#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[10],sum=0;
 clrscr();
 printf("Enter the numbers for the array to get the sum of the numbers:- \n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
  sum=sum+a[i];
 }
 printf("The sum of the given numbers in the array is %d .",sum);
 getch();
}
