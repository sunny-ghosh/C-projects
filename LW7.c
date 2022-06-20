// 4. W.A.P in C to create a SINGLE LINKED LIST & also perform the following operations-
// i. Display
// ii. Insert At the Beginning
// iii. Insert At the End
// iv.. Insert At Any Given Position
// v. Delete From the Beginning
// vi. Delete From the End
// vii. Delete A Specific Node

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void insert_beginning();
void insert_end();
void insert_random();
void remove_beginning();
void remove_end();
void remove_random();
void display();
typedef struct linked_list
{
    int data;
    struct linked_list *next;
} node;
node *start;
void main()
{
    int choice;
    // clrscr();
    printf("\n**---------------SINGLE LINKED LIST--------------**");
    printf("\n===================================================\n");
    while(1)
    {
        printf("\n#---------------MAIN MENU------------------#\n");
        printf("\n===================================================\n");
        printf("\n1).CREATE\n2).DISPLAY\n3).EXIT\n");
        printf("\nINSERT AT-\n\t\t4).BEGINNING\n\t\t5).END\n\t\t6).AS PER USER'S CHOICE\n");
        printf("\nDELETE FROM-\n\t\t7).BEGINNING\n\t\t8).END\n\t\t9).AS PER USER'S CHOICE\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create();
            break;
            case 2: display();
            break;
            case 3: exit(1);
            case 4: insert_beginning();
            break;
            case 5: insert_end();
            break;
            case 6: insert_random();
            break;
            case 7: remove_beginning();
            break;
            case 8: remove_end();
            break;
            case 9: remove_random();
            break;
            default: printf("INVALID CHOICE!!!");
        }
    }
    // getch();
}
void create()
{
node *present,*temp;
char ch;
if(start==NULL)
{
present=(node *)malloc(sizeof (node));
printf("\nENTER DATA FOR THE FIRST NODE: ");
scanf("%d",&present->data);
printf("\n**LINKED LIST IS CREATED**\n");
start=present;
do
{
temp=(node *)malloc(sizeof (node));
printf("\nENTER DATA FOR THE NEXT NODE: ");
scanf("%d",&temp->data);
present->next=temp;
present=temp;
printf("PRESS 'Y' IF YOU WANT TO ADD MORE DATA OTHER WISE PRESS 'N'");
ch=getch();
}
while(ch=='y');
present->next=NULL;
}
else
{
printf("\n**LINKED LIST IS ALREADY CREATED**");
}
}
void display()
{
node *present;
printf("LINKED LIST IS: \n");
printf("Printing Values...\n");
present=start;
while(present!=NULL)
{
printf("%d\t",present->data);
present=present->next;
}
}
void insert_beginning()
{
node *temp;
temp=(node *)malloc(sizeof (node));
printf("ENTER THE DATA TO BE INSERTED AT THE BEGINNING: ");
scanf("%d",&temp->data);
temp->next=start;
start=temp;
printf("\n**ELEMENT IS INSERTED**");
}
void insert_end()
{
node *present,*temp;
temp=(node *)malloc(sizeof (node));
printf("ENTER THE DATA TO BE INSERTED AT THE END: ");
scanf("%d",&temp->data);
present=start;
while(present->next!=NULL)
{
present=present->next;
}
present->next=temp;
temp->next=NULL;
printf("\n**ELEMENT IS INSERTED**");
}
void insert_random()
{
int x;
node *present,*temp;
printf("ENTER THE NODE AFTER WHICH YOU WANT TO ADD THE NEW NODE: ");
scanf("%d",&x);
temp=(node *)malloc(sizeof (node));
printf("ENTER THE NEW NODE: ");
scanf("%d",&temp->data);
present=start;

while(present->data!=x)
{
present=present->next;
}
temp->next=present->next;
present->next=temp;
printf("\n**ELEMENT IS INSERTED**");
}
void remove_beginning()
{
node *temp;
if(start==NULL)
{
printf("LINKED LIST IS EMPTY!!!");
return;
}
temp=start;
start=temp->next;
free(temp);
printf("\n**ELEMENT IS DELETED FROM THE BEGINNING OF THE LINKED LIST**");
}
void remove_end()
{
node *temp,*present;
if(start==NULL)
{
printf("LINKED LIST IS EMPTY!!!");
return;
}
present=start;
while(present->next!=NULL)
{
temp=present;
present=present->next;
}
temp->next=NULL;
free(present);
printf("\n**ELEMENT IS DELETED FROM THE END OF THE LINKED LIST**");
}
void remove_random()
{
node *temp,*present;
int x;
if(start==NULL)
{
printf("LINKED LIST IS EMPTY!!!");
return;
}
present=start;
printf("ENTER THE ELEMENT TO BE DELETED: ");
scanf("%d",&x);
while(present->data!=x)
{
temp=present;
present=present->next;
}
temp->next=present->next;
free(present);
printf("\n**ELEMENT IS DELETED FROM THE LINKED LIST**");
}

















































                     //*** Alternative Source Code ***//

                         //*** Linked List ***//


// #include<stdio.h>
// #include<conio.h>
// #include<malloc.h>
// struct node
// {
// int info;
// struct node *next;
// }*start;
// void insertl();
// void insertf();
// void insertm();
// void delf();
// void dell();
// void delm();
// void modify();
// void display();
// void dispf();
// void displ();
// void dispt();
// int main()
// {
// int m,n;
// // clrscr();
// do
// {
// printf("\n1.Insertion\n2.Deletion\n3.Update\n4.Show\n5.Exit\n\n");
// printf("\nEnter any option: ");
// scanf("%d",&m);
// switch(m)
// {
// case 1:
// printf("\n\t1.Begining\n\t2.End\n\t3.Middle\n\tEnter position:");
// scanf("%d",&n);
// switch(n)
// {
// case 1:
// insertf();
// break;
// case 2:
// insertl();
// break;
// case 3:
// insertm();
// break;
// }
// break;
// case 2:
// printf("\n\t1..Begining:\n\t2..End:\n\t3..Middle:");
// printf("\n\tEnter position:");
// scanf("%d",&n);
// switch(n)
// {
// case 1:
// delf();
// break;
// case 2:
// dell();
// break;
// case 3:
// delm();
// break;
// }
// break;
// case 3:
// modify();
// break;
// case 4:
// printf("\n\t1.First item\n\t2.Last item\n\t3.Total list\n\t4.All above");
// printf("\n\tEnter an option:");
// scanf("%d",&n);
// switch(n)
// {
// case 1:
// dispf();
// break;
// case 2:
// displ();
// break;
// case 3:
// dispt();
// break;
// case 4:
// display();
// }
// break;
// case 5:
// exit(0);
// break;
// }
// }while(m!=0);
// getch();
// }
// void display()
// {
// struct node *q,*r,*s;
// q=start;
// s=start;
// printf("\nTotal List:\n");
// printf(" |%u|->",start);
// while(s!=NULL)
// {
// printf(" |%d|%u|->",s->info,s->next);
// s=s->next;
// }
// printf("\n\nFirst item=%d and adress=%u\n",q->info,start);
// while(q!=NULL)
// {
// if(start->next==NULL)
// {
// printf("\nLast item=%d and adress=%u\n",q->info,start);
// return;
// }
// else
// {
// if(q->next==NULL)
// {
// printf("\nLast item=%d and adress=%u\n",q->info,r->next);
// return;
// }
// else
// r=q;
// q=q->next;
// }
// }
// }
// void insertl()
// {
// int m;
// struct node *p,*q;
// printf("\nEnter data:");
// scanf("%d",&m);
// p=(struct node *)malloc(sizeof(struct node));
// p->info=m;
// p->next=NULL;
// if(start==NULL)
// start=p;
// else
// {
// q=start;
// while(q->next!=NULL)
// {
// q=q->next;
// }
// q->next=p;
// }
// display();
// }
// void insertf()
// {
// int m;
// struct node *p;
// printf("\nEnter data:");
// scanf("%d",&m);
// p=(struct node *)malloc(sizeof(struct node));
// p->info=m;
// p->next=start;
// start=p;
// display();
// }
// void insertm()
// {
// struct node *p,*q,*r;
// int m,n,c=1;
// printf("\nEnter possible node number:");
// scanf("%d",&n);
// printf("\nEnter data:");
// scanf("%d",&m);
// p=(struct node *)malloc(sizeof(struct node));
// p->info=m;
// if(n==1)
// {
// p->next=start;
// start=p;
// }
// else
// {
// q=start;
// while(c!=n)
// {
// r=q;
// q=q->next;
// c++;
// }
// r->next=p;
// p->next=q;
// }
// display();
// }
// void delf()
// {
// struct node *p;
// if(start==NULL)
// {
// printf("\nEmpty list-deletion not possible.");
// return;
// }
// else
// {
// p=start;
// start=start->next;
// free(p);
// }
// display();
// }
// void dell()
// {
// struct node *p,*q;
// if(start==NULL)
// {
// printf("\nEmpty list-deletion not possible\n");
// return;
// }
// else
// {
// p=start;
// while(p->next!=NULL)
// {
// q=p;
// p=p->next;
// }
// q->next=NULL;
// free(p);
// display();
// }
// }
// void delm()
// {
// struct node *p,*q,*r;
// int n,c=1;
// if(start==NULL)
// {
// printf("\nEmpty list-deletion not possible\n");
// return;
// }
// else
// {
// printf("\nEnter possible node number:");
// scanf("%d",&n);
// if(n==1)
// {
// p=start;
// start=start->next;
// free(p);
// }
// else
// {
// q=start;
// while(c!=n)
// {
// r=q;
// q=q->next;
// c++;
// }
// r->next=q->next;
// free(q);
// }
// display();
// }
// }
// void modify()
// {
// struct node *loc,*q;
// int item,m,c=1;
// printf("\nEnter the item to be modified:");
// scanf("%d",&item);
// printf("\nEnter the new value:");
// scanf("%d",&m);
// q=start;
// loc=NULL;
// while(q!=NULL)
// {
// if(item==q->info)
// {
// q->info=m;
// return;
// }
// else
// {
// q=q->next;
// }
// }
// if(loc==NULL)
// printf("\nItem not found: Modification unsucessful");
// }
// void dispf()
// {
// struct node *q;
// q=start;
// printf("\n\nFirst item=%d and adress=%u\n",q->info,start);
// }
// void dispt()
// {
// struct node *s;
// s=start;
// printf("\nTotal List:\n");
// printf(" |%u|->",start);
// while(s!=NULL)
// {
// printf(" |%d|%u|->",s->info,s->next);
// s=s->next;
// }
// }
// void displ()
// {
// struct node *q,*r;
// q=start;
// while(q!=NULL)
// {
// if(start->next==NULL)
// {
// printf("\nLast item=%d and adress=%u\n",q->info,start);
// return;
// }
// else
// {
// if(q->next!=NULL)
// {
// r=q;
// q=q->next;
// }
// else
// printf("\nLast item=%d and adress=%u\n",q->info,r->next);
// return;
// }
// }
// }