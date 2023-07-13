#include<stdio.h>
#include<conio.h>
void main()
{
 int y;
 clrscr();
 printf("Enter the Year==>");
 scanf("%d",&y);
 if(y%100==0)
 {
  if(y%400==0)
  {
   printf("%d is a Leap Year.",y);
  }
  else
  {
   printf("%d is not a Leap Year.",y);
  }
 }
 else
 {
  if(y%4==0)
  {
   printf("%d is a Leap Year.",y);
  }
  else
  {
   printf("%d is not a Leap Year.",y);
  }
 }
 getch();
}
