         //*** PROGRAM TO IMPLEMENT STACK OPERATIONS USING LINKED LIST ***//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int val;
struct node *next;
};
typedef struct node nodeptr;
int empty(nodeptr **);
void push(nodeptr **,int);
int pop(nodeptr **);
void display(nodeptr *);
void main()
{
    nodeptr *n=NULL;
    int ele,val;
    char ch;
    // clrscr();
    while(1)
    {
        printf("\n\t\t\t-:STANDARD STACK OPERATIONS:-\n");
        printf("\n1>EMPTY CHECK\n2>PUSH\n3>POP\n4>DISPLAY\n5>EXIT\n");
        printf("\nEnter your choice:- ");
        ch=getche();
        switch(ch)
        {
            case '1': if(empty(&n))
            printf("\nStack is empty.\n");
            else
            printf("\nStack is not empty.\n");
            break;
            case '2': printf("\nEnter the number to push: ");
            scanf("%d",&val);
            push(&n,val);
            break;
            case '3': ele=pop(&n);
            printf("\nPoped element: %d\n",ele);
            break;
            case '4': printf("\nThe status of the stack:-\n");
            display(n);
            break;
            case '5': exit(1);
            default: printf("\nInvalid choice, try again....\n");
            break;
        }
    }
    // getch();
}
int empty(nodeptr **top)
{
    if(*top==NULL)
    return (1);
    else
    return (0);
}
void push(nodeptr **top,int num)
{
    nodeptr *temp;
    temp=(nodeptr *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("\nStack overflow.");
    else
    {
        temp->val=num;
        temp->next=*top;
        *top=temp;
        printf("%d is pushed into the stack.",num);
    }
}
int pop(nodeptr **top)
{
    nodeptr *temp;
    int num;
    if(*top==NULL)
    {
        printf("\nStack underflow.");
        exit(1);
    }
    else
    {
        temp=*top;
        num=temp->val;
        *top=temp->next;
        free(temp);
    }
    return num;
}
void display(nodeptr *p)
{
    if(empty(&p))
        printf("Stack is empty.\n");
    else
    {
        while(p!=NULL)
        {
            printf("|%d|%u|-->",p->val,p->next);
            p=p->next;
        }
    }
}






































// 5). WAP in C to implement STACK USING LINKED LIST.
// #include<stdio.h>
// #include<conio.h>
// void push();
// void pop();
// void display();
// typedef struct linked_list
// {
// int data;
// struct linked_list *next;
// }node;
// node *top;
// void main()
// {
// int ch;
// clrscr();
// printf("**----------STACK USING LINKED LIST----------**\n");
// printf("===============================================\n");
// while(1)
// {
// printf("\n\n#----------MAIN MENU----------#\n");
// 20
// printf("\n1).PUSH\n2).POP\n3).DISPLAY\n4).EXIT\n");
// printf("\nENTER YOUR CHOICE: ");
// scanf("%d",&ch);
// switch(ch)
// {
// case 1:
// push();
// break;
// case 2:
// pop();
// break;
// case 3:
// display();
// break;
// case 4:
// exit(0);
// default:
// printf("INVALID INPUT!!!");
// }
// }
// }
// void display()
// {
// node *present;
// if(top!=NULL)
// {
// printf("STACK ELEMENTS ARE: \n");
// 21
// printf("\nPrinting Values...\n");
// present=top;
// while(present!=NULL)
// {
// printf("%d\n",present->data);
// present=present->next;
// }
// }
// else
// {
// printf("\nEMPTY STACK!!!");
// }
// }
// void push()
// {
// node *temp;
// temp=(node *)malloc(sizeof(node));
// if(top==NULL)
// {
// printf("ENTER AN ELEMENT: ");
// scanf("%d",&temp->data);
// printf("\n**ELEMENT IS PUSHED INTO THE STACK**");
// temp->next=NULL;
// top=temp;
// }
// else
// {
// 22
// if(temp==NULL)
// {
// printf("STACK OVERFLOW!!!");
// return;
// }
// printf("ENTER AN ELEMENT: ");
// scanf("%d",&temp->data);
// temp->next=top;
// top=temp;
// printf("\n**ELEMENT IS PUSHED INTO THE STACK**");
// }
// }
// void pop()
// {
// node *temp;
// if(top==NULL)
// {
// printf("\nSTACK UNDERFLOW!!!");
// return;
// }
// temp=top;
// top=temp->next;
// free(temp);
// printf("\n**ELEMENT IS POPED FROM THE STACK**");
// }