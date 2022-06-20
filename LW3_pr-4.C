                 //*** PROGRAM TO INFIX TO POSTFIX CONVERSION ***//
                 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 30
struct stack
{
    char arr[SIZE];
    int top;
};
void convert(char [],char []);
int empty(struct stack *);
void push(struct stack *,char);
char pop(struct stack *);
int prcd(char,char);
int main()
{
    char infix[30],postfix[30];
    printf("\nEnter the infix notation : ");
    gets(infix);
    convert(infix,postfix);
    printf("\nThe postfix notation is : ");
    puts(postfix);
    return(0);
}
void convert(char infix[],char postfix[])
{
    int p,k=0,a=0;
    char symb;
    struct stack *s;
    s->top=-1;
    p=strlen(infix);
    while(k<p)
    {
        symb=infix[k];
        if(isdigit(symb)||isalpha(symb))
        {
            postfix[a++]=symb;
        }
        else
        {
            while(!empty(s) && prcd(s->arr[s->top],symb))
            {
                postfix[a++]=pop(s);
            }
            if(empty(s) || symb!=')')
            {
                push(s,symb);
            }
            else
            {
                pop(s);
            }
        }
        k++;
    }
    while(!empty(s))
    {
        postfix[a++]=pop(s);
        postfix[a]='\0';
    }
}
int empty(struct stack *s)
{
    if(s->top==-1)
    return(1);
    else
    return(0);
}
void push(struct stack *s,char data)
{
    if(s->top==SIZE-1)
    {
        printf("\n Stack Overflow");
        exit(1);
    }
    s->arr[++s->top]=data;
}
char pop(struct stack *s)
{
    if(empty(s))
    {
        printf("\n Stack Underflow");
        return 0;
    }
    return(s->arr[s->top--]);
}
int prcd(char x,char y)
{
    if(x=='$' && (y=='*' || y=='/' || y=='+' || y=='-' || y==')'))
    {
        return(1);
    }
    else if(x=='/' && (y=='/' || y=='*' || y=='+' || y=='-' || y==')'))
    {
        return(1);
    }
    else if(x=='*' && (y=='*' || y=='/' || y=='+' || y=='-' || y==')'))
    {
        return(1);
    }
    else if(x=='+' && (y=='+' || y=='-' || y==')'))
    {
        return(1);
    }
    else if(x=='-' && (y=='-' || y=='+' || y==')'))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}









// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define SIZE 30
// struct stack
// {
// char arr[SIZE];
// int top;
// };
// void convert(char [],char []);
// int empty(struct stack *);
// void push(struct stack *,char);
// char pop(struct stack *);
// int prcd(char,char);
// void main()
//     {
//       char infix[30],postfix[30];
//       printf("\n Enter the infix notation : ");
//              gets(infix);
//       convert(infix,postfix);
//       printf("\n The postfix notation is : ");
//              puts(postfix);
//       getch();
//     }
// void convert(char infix[],char postfix[])
//     {
//      int p,k=0,a=0;
//      char symb;
//      struct stack *s;
//      s->top=-1;
//      p=strlen(infix);
//      while(k<p)
//               {
//                symb=infix[k];
//                if(isdigit(symb) || isalpha(symb))
//                      postfix[a++]=symb;
//                else
//                    {
//                      while(!empty(s) && prcd(s->arr[s->top],symb))
//                             {
//                               postfix[a++]=pop(s);
//                             }
//                      if(empty(s) || symb!=')')
//                             {
//                               push(s,symb);
//                             }
//                      else
//                             {
//                               pop(s);
//                             }
//                    }
//                 k++;
//               }
//     while(!empty(s))
//               postfix[a++]=pop(s);
//               postfix[a]='\0';
//      }
// int empty(struct stack *s)
//     {
//       if(s->top==-1)
//            return(1);
//       else
//            return(0);

//     }
// void push(struct stack *s,char data)
//     {
//       if(s->top==SIZE-1)
//            {
//              printf("\n Stack Overflow");
//              getch();
//              exit(1);
//            }
//       s->arr[++s->top]=data;
//     }
// char pop(struct stack *s)
//     {
//       if(empty(s))
//           {
//             printf("\n Stack Underflow");
//             return 0;
//           }
//       return(s->arr[s->top--]);

//     }
// int prcd(char x,char y)
//     {
//       if(x=='$' && (y=='*' || y=='/' || y=='+' || y=='-' || y==')'))
//                 {
//                   return(1);
//                 }
//       else if(x=='/' && (y=='/' || y=='*' || y=='+' || y=='-' || y==')'))
//                 {
//                   return(1);
//                 }
//       else if(x=='\0' && (y=='\0' || y=='/' || y=='+' || y=='-' || y==')'))
//                 {
//                   return(1);
//                 }
//       else if(x=='+' && (y=='+' || y=='-' || y==')'))
//                 {
//                   return(1);
//                 }
//       else if(x=='-' && (y=='-' || y=='+' || y==')'))
//                 {
//                   return(1);
//                 }
//       else
//                 {
//                   return(0);
//                 }
//      }