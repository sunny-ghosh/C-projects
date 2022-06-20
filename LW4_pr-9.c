          //*** PROGRAM TO IMPLEMENT CIRCULER QUEUE OPERATIONS ***//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 3
int Q[size],front = -1,rear = -1;
void empty();
void insert();
void delete();
void display();
void main()
{
    char ch;
    // clrscr();
    while(1)
    {
        printf("\n\n\t\t\t-:CIRCULAR QUEUE OPERATIONS:-\n");
        printf("\n1>EMPTY CHECK\n2>INSERTION\n3>DELETION\n4>DISPLAY\n5>EXIT");
        printf("\n\nEnter your choice :  ");
        ch=getche();
        switch(ch)
        {
            case '1': empty();
            break;
            case '2': insert();
            break;
            case '3': delete();
            break;
            case '4': display();
            break;
            case '5': exit(1);
            default : printf("\nInvalid choice! Try again...\n");
        }
    }
}
void empty()
{
    if(rear==-1)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\nQueue is not empty.");
    }
}
void insert()
{
    int val;
    // if(rear==(size-1))
    if(front==(rear+1)%size)
    {
        printf("\nOverflow, queue is full.");
    }
    else
    {
        printf("\nEnter an element : ");
        scanf("%d",&val);
        if(rear==-1)
        {
            front=rear=0;
            Q[rear]=val;
        }
        else
        {
            rear = (rear+1)%size;
            Q[rear]=val;
        }
        printf("%d is inserted into the queue.\n",val);
    }
}
void delete()
{
    int num;
    if(rear==-1)
    {
        printf("\nUnderflow, queue is empty.");
    }
    else
    {
        num=Q[front];
        if(front==rear)
        {
            front = rear = -1;
        }
        else
        {
            num=Q[front];
            front = (front + 1)%size;
        }
        printf("\n%d is deleted from the queue.\n",num);
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\nThe status of the circular queue :-\n");
        if(front<=rear)
        {
            for(i=front;i<=rear;i++)
            {
                printf("|%d|\n",Q[i]);
            }
        }
        else
        {
            for(i=front;i<=(size+rear);i++)
            {
                printf("|%d|\n",Q[i%size]);
            }
        }
    }
}