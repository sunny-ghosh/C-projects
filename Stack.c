//***   Q: W.A.P. in C to implement stack abstract datatype.   ***//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
void push();
void pop();
void display();
long int stack[MAX];
int top = -1;
void main()
{
 int ch;
//  clrscr();
 while(1)
 {
  printf("\n1. PUSH  2. POP  3. DISPLAY  4. EXIT\n");
  printf("Enter your choice:- ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1 : push();
   break;
   case 2 : pop();
   break;
   case 3 : display();
   break;
   case 4 : exit(1);
   default: printf("Invalid choice, try again.\n");
  }
 }
}
void push()
{
 int x;
 if(top==MAX-1)
 {
  printf("\nOverflow, stack is full.\n");
 }
 else
 {
    printf("Enter an element : ");
    scanf("%d",&x);
    top=top+1;
    stack[top]=x;
    printf("%d is inserted into stack.\n",x);
 }
}
void pop()
{
 int x;
 if(top==-1)
 {
  printf("\nUnderflow, stack is empty.\n");
 }
 else
 {
    x=stack[top];
    top=top-1;
    printf("%d is poped from stack.\n",x);
 }
}
void display()
{
   int k;
   if(top==-1)
   {
     printf("Stack is empty.\n");
   }
   else
   {
     printf("Stack elements are :- ");
     //  for(k=top;k>=0;k--)
     for(k=0;k<=top;k++)
     {
        printf("%ld, ",stack[k]);
     }
   }
   printf("\n");
}