           //*** PROGRAM TO IMPLEMENT STANDARD STACK OPERATIONS ***//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 20
struct stack
{
 int arr[size];
 int top;
};
int empty(struct stack *);
void push(struct stack *,int);
int pop(struct stack *);
void display(struct stack *);
void main()
{
 struct stack s;
 int ele,val;
 char ch;
//  clrscr();           * This function is only supported in TURBOC++ IDE . * 
 s.top=-1;
 while(1)
 {
  printf("\n\t\t\t-:STANDARD STACK OPERATIONS:-\n");
  printf("\n1>EMPTY CHECK\n2>PUSH\n3>POP\n4>DISPLAY\n5>EXIT\n");
  printf("\nEnter your choice:- ");
  ch=getche();
  switch(ch)
  {
   case '1': if(empty(&s))
           printf("\nStack is empty.\n");
          else
           printf("\nStack is not empty.\n");
          break;
   case '2': printf("\nEnter the element to push: ");
             scanf("%d",&val);
             push(&s,val);
            break;
   case '3': ele=pop(&s);
             printf("\nPoped element: %d\n",ele);
            break;
   case '4': printf("\nStatus of the stack:-\n");
             display(&s);
            break;
   case '5': exit(0);
   default: printf("\nInvalid choice, try again.\n");
            break;
  }
 }
}
int empty(struct stack *s)
{
 if(s->top==-1)
  return(1);
 else
  return(0);
}
void push(struct stack *s,int num)
{
 if(s->top==(size-1))
 {
  printf("\nStack overflow.\n");
  exit(1);
 }
 s->arr[++s->top]=num;
 printf("Element is pushed in the stack.\n");
}
int pop(struct stack *s)
{
 if(empty(s))
 {
  printf("\nStack underflow.\n");
  exit(1);
 }
 return (s->arr[s->top--]);
}
void display(struct stack *s)
{
 int i;
 if (empty(s))
  printf("\nStack is Empty.\n");
 else
 {
  for(i=s->top;i>=0;i--)
  {
   printf("|%d|\n",s->arr[i]);
  }
 }
}