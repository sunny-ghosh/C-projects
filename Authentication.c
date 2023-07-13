#include<stdio.h>
#include<conio.h>
void main()
{
 long int id,pword;
 clrscr();
 printf("Login Id : ");
 scanf("%ld",&id);
 printf("Password : ");
 scanf("%ld",&pword);
 if(id==62202143)
 {
  if(pword==22052003)
  {
   printf("Login successful.");
  }
  else
  {
   printf("The password is not correct.");
  }
 }
 else
 {
  printf("The login id is not correct.");
 }
 getch();
}