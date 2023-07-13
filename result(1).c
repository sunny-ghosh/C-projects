#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 float avg;
 clrscr();
 printf("Enter the marks of the three subjects==>");
 scanf("%d%d%d",&a,&b,&c);
 avg=(a+b+c)/3.0;
 if(avg<=40)
 {
  printf("Result :  F");
 }
 else if((avg>=41)&&(avg<=50))
 {
  printf("Result :  3RD Division");
 }
 else if((avg>=51)&&(avg<=60))
 {
  printf("Result :  2ND Division");
 }
 else if((avg>=61)&&(avg<=75))
 {
  printf("Result :  1ST Division");
 }
 else
 {
  printf("Result :  STAR");
 }
 getch();
}