#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,e,sum;
 float avg;
 clrscr();
 printf("Enter the marks of the 5 subjects==>");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 sum=(a+b+c+d+e);
 printf("The Aggregate marks is==>%d\n",sum);
 avg=(sum/5.0);
 printf("The average of the marks of those subjects is==>%f\n",avg);
 if(avg>=90)
 {
  printf("The Grade is 'O' ");
 }
 else if(avg>=80)
 {
  printf("The Grade is 'E' ");
 }
 else if(avg>=70)
 {
  printf("The Grade is 'A' ");
 }
 else if(avg>=60)
 {
  printf("The Grade is 'B' ");
 }
 else if(avg>=50)
 {
  printf("The Grade is 'C' ");
 }
 else if(avg>=40)
 {
  printf("The Grade is 'D' ");
 }
 else if(avg<40)
 {
  printf("The Grade is 'F' ");
 }
 else
 {
  printf("Input is Invalid");
 }
 getch();
}