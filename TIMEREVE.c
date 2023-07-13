#include<stdio.h>
#include<conio.h>
void main()
{
 int time,hr,min,s;
 clrscr();
 printf("Enter the time in second==>");
 scanf("%d",&time);
 hr=(time/3600);
 printf("The time is  %d hour ",hr);
 s=(time%3600);
 min=(s/60);
 printf("%d min ",min);
 s=(s%60);
 printf("%d sec.",s);
 getch();
}
