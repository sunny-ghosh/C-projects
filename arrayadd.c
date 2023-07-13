#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[5],b[5],c[5];
 clrscr();
 printf("Enter the values for the 1st array : \n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the values for the 2nd  array : \n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&b[i]);
 }
 for(i=0;i<5;i++)
 {
  c[i]=a[i]+b[i];
 }
 printf("The addition of two arrays is : \n");
 for(i=0;i<5;i++)
 {
  printf("%d\t",c[i]);
 }
 getch();
}
