//                  //*** Write a C program to evaluate a postfix expression. ***//

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<Math.h>
// #include<string.h>
// #define SIZE 20
// struct stack
// {
// int arr[SIZE];
// int top;
// };
// void push(struct stack *,int);
// int pop (struct stack*);
// void evaluate (struct stack *,char *);
// void show(struct stack *);
// void main()
//        {
//         struct stack s;
//         char exp[SIZE];
//         s.top=-1;
//         printf("Enter an exp in postfix Form: ");
//                scanf("%c",&exp);
//         evaluate(&s,exp);
//         show(&s);
//         getch();
//        }
// void push (struct stack *s,int item)
//     {
//       if (s->top==(SIZE-1))
//             {
//               printf("\n stack overflow");
//               getch();
//               exit(1);
//             }
//       s->arr[++s->top]=item;
//     }
// int pop(struct stack *s)
//    {
//      if(s->top==-1)
//           {
//             printf ("\n stack underflow");
//             getch();
//             exit(1);
//           }
//      return(s->arr[s->top--]);
//    }
// void evaluate(struct stack*s,char*exp)
//      {
//        int v1,v2,v3,num;
//        while(*exp)
//              {
//                if(( *exp=='\0')|| (*exp)=='\t')
//                     {
//                       exp ++;
//                       continue;
//                     }
//                if (isdigit(*exp))
//                     {
//                       num=*exp-'0';
//                       push(s,num);
//                     }
//                else
//                     {
//                       v1=pop(s);
//                       v2=pop(s);
//                       switch (*exp)
//                                    {
//                                     case '+':
//                                               v3=v2+v1;
//                                               break;
//                                     case '-' :
//                                               v3=v2-v1;
//                                               break;
//                                     case '/':
//                                               v3=v2/v1;
//                                               break;
//                                     case '*':
//                                               v3=v2*v1;
//                                               break;
//                                     case '%':
//                                               v3=v2%v1;
//                                               break;
//                                     case '$':
//                                               v3=pow(v2,v1);
//                                               break;
//                                     default:
//                                               printf("Unknown operator encountered");
//                                   }
//                        push(s,v3);
//                     }
//                        exp ++;
//             }
//     }
// void show (struct stack*s)
//      {
//        int result;
//        result=pop(s);
//        printf("\nThe evaluation is %d",result);
//      }






// // #include<stdio.h>
// // #include<conio.h>
// // #include<stdlib.h>
// // #include<Math.h>
// // #include<string.h>
// // #define Size 20
// // struct stack
// // {
// //     int arr[Size];
// //     int top;
// // }
// // void push(struct stack *s,int);
// // int pop (struct stack*);
// // void evaluate (struct stack*,char*);
// // void show(struct stack*);
// // void Main()
// // {
// //     struct stack s;
// //     char exp[Size];
// //     s.top= -1;
// //     printf ("Enter an exp in postfix Form: ");
// //     gets(exp);
// //     evaluate(&s,exp);
// //     show(&s, );
// // }
// // void push(struct stack *s,int item)
// // {
// //     if(s→top==(size-1))
// //     {
// //         printf ("\nStack overflow.");
// //         exit(1);  
// //     }
// //     s→arr[++s→top]=item;

// // }
// // int pop(struct stack *s)
// // {
// //     if(s→top==-1)
// //     {
// //         printf ("\nStack underflow.");
// //         exit(1);
// //     }
// //     return(s→arr[s→top--]);
// // }
// // void evaluate(struct stack*s,char*exp)
// // {
// //     int v1,v2,v3,num;
// //     while(*exp)
// //     {
// //         If(*exp == '\t' *exp s ='\t')
// //         {
            
// //             exp++;
// //             continue;
// //         }
// //         If(isdigit(*exp))
// //         {
// //             num =*exp-'0';
// //             push (s,num);
// //         }
// //         else
// //         {
// //             v1=pop(s);
// //             v2 =pop(s);
// //             switch (*exp)
// //             {
// //                 case'+': V3=V2+V1;
// //                 Break;
// //                 case '-' : V3 =V2-V1;
// //                 Break;
// //                 case '/': V3=V2/V1;
// //                 Break;
// //                 case '*': V3=V2*V1;
// //                 Break;
// //                 case '%': V3=V2%V1;
// //                 Break;
// //                 case '$': V3=pow (V2,V1);
// //                 Break;
// //                 default : printf("Unknown operator encountered.");
// //                 exit(1);
// //             }
// //             push(s,V3);
// //         }
// //         exp ++;
// //     }
// // }
// // void show (struct stack*s)
// // {
// //     int result;
// //     result =pop(s);
// //     printf ("\nThe evalution is %d .",result);
// // }












#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define size 20
struct stack
{
int arr[size];
int top;
};
void push(struct stack*,int);
int pop (struct stack*);
void evaluate (struct stack*,char*);
void show(struct stack*);

void main()
{
struct stack s;
char exp[size];

s.top= -1;
printf("Enter an exp in postfix Form: ");
gets(exp);
evaluate(&s,exp);
show(&s);

}//
void push (struct stack *s,int item)
{
if (s->top== (size-1))
{
printf("\n stack overflow");

exit(1);
}
s->arr[++s->top]=item;
}//
int pop(struct stack *s)
{
if(s->top ==-1)

{
printf ("\n stack under flow");

exit(1);
}
return(s->arr[s->top --]);
}//
void evaluate(struct stack*s ,char*exp)
{
int v1,v2,v3,num;
while (*exp)
{
if(*exp == ' '||*exp =='\t')
{
exp ++;
continue;
}
if(isdigit(*exp))
{
num = *exp - '0';
push (s,num);
}
else
{
v1=pop(s);
v2 =pop(s);
switch (*exp)
{
case  '+': v3=v2+v1;
break;
case '-' : v3 =v2-v1;
break;
case '/': v3=v2/v1;
break;
case '*': v3=v2*v1;
break;
case '%': v3=v2%v1;
break;
case '^': v3=pow(v2,v1);
break;
default: printf("Unknown operator encountered");
// getch ();
exit(1);
}
push(s,v3);
}
exp ++;
}
}

void show (struct stack*s)
{
int result;
result =pop(s);
printf ("\n The evalution is %d" ,result);
}//
