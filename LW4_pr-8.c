         //*** PROGRAM TO IMPLEMENT DOUBLE ENDED QUEUE OPERATIONS ***//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 30
int deQ[SIZE],F=-1,R=-1;
void empty();
void insertfromfront(int);
void insertfromrear(int);
void deletefromfront();
void deletefromrear();
void display();
void main()
{
    char ch;
    int x;
    // clrscr();
    while(1)
    {
        printf("\n\n\t\t\t-:DOUBLE ENDED QUEUE QUEUE OPERATIONS:-\n");
        printf("\n1. <Empty Check>\n");
        printf("2. <Insert from front>\n");
        printf("3. <Insert from rear>\n");
        printf("4. <Delete from front>\n");
        printf("5. <Delete from rear>\n");
        printf("6. <Display>\n");
        printf("7. <Exit>\n");
        printf("\nEnter your choice :  ");
        ch=getche();
        switch(ch)
        {
            case '1' : empty();
                       break;
            case '2' : printf("\nEnter an element : ");
                       scanf("%d",&x);
                       insertfromfront(x);
                       break;
            case '3' : printf("\nEnter an element : ");
                       scanf("%d",&x);
                       insertfromrear(x);
                       break;
            case '4' : deletefromfront();
                       break;
            case '5' : deletefromrear();
                       break;
            case '6' : display();
                       break;
            case '7' : exit(1);
            default : printf("\nInvalid choice! Try again...\n");
        }
    }
}
void empty()
{
    if(R==-1)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\nQueue is not empty.");
    }
}
void insertfromfront(int x)
{
    if(F==(R+1)%SIZE)
    {
        printf("\nOverflow, queue is full.");
    }
    else
    {
        if(R==-1)
        {
            F=0;
            R=0;
            deQ[R]=x;
        }
        else
        {
            F=(F+(SIZE-1))%SIZE;
            deQ[F]=x;
        }
        printf("%d is inserted at the front end of the queue.\n",x);
    }
}
void insertfromrear(int x)
{
    if(F==(R+1)%SIZE)
    {
        printf("\nOverflow, queue is full.");
    }
    else
    {
        if(R==-1)
        {
            F=0;
            R=0;
            deQ[R]=x;
        }
        else
        {
            R=(R+1)%SIZE;
            deQ[R]=x;
        }
        printf("%d is inserted at the back end of the queue.\n",x);
    }
}
void deletefromfront()
{
    int num;
    if(F==-1)
    {
        printf("\nUnderflow, queue is empty.");
    }
    else
    {
        if(F==R)
        {
            num=deQ[F];
            F=-1;
            R=-1;
        }
        else
        {
            num=deQ[F];
            F=(F+1)%SIZE;
        }
        printf("\n%d is deleted from the front end of the queue.\n",num);
    }
}
void deletefromrear()
{
    int num;
    if(R==-1)
    {
        printf("\nUnderflow, queue is empty.");
    }
    else 
    {
        if(F==R)
        {
            num=deQ[R];
            F=-1;
            R=-1;
        }
        else
        {
            num=deQ[R];
            R=(R+(SIZE-1))%SIZE;
        }
        printf("\n%d is deleted from the back end of the queue.\n",num);
    }
}    
void display()
{
    int i;
    if(F==-1)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\nThe status of the double ended queue :-\n");
        if(F<=R)
        {
            for(i=F;i<=R;i++)
            {
                printf("|%d|\n",deQ[i]);
            }
        }
        else
        {
            for(i=F;i<=(SIZE+R);i++)
            {
                printf("|%d|\n",deQ[i%SIZE]);
            }
        }
    }
}