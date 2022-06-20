         //*** PROGRAM TO IMPLEMENT QUEUE OPERATIONS USING LINKED LIST ***//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
  int val;
  struct node * next;
};

typedef struct node * nodeptr;

struct queue {
  struct node * front;
  struct node * rear;
};

typedef struct queue * qptr;

int empty(qptr);
void addq(qptr, int);
int delq(qptr);
void display(qptr);

void main() {
  qptr q;
  int ele, val;
  char ch;
  q -> front = q -> rear = NULL;

  while (1) {

    printf("\n\t\t\t-:QUEUE USING LINKED LIST:-\n");
    printf("\n1>EMPTY CHECK\n2>ADDITION\n3>DELETION\n4>DISPLAY\n5>EXIT\n");
    printf("\nEnter your choice:- ");
    scanf("%d", & ch);

    switch (ch) {
    case 1:
      if (empty(q))
        printf("\nQueue is empty.\n");
      else
        printf("\nQueue is not empty.\n");
      break;
    case 2:
      printf("\nEnter the number: ");
      scanf("%d", & val);
      addq(q, val);
      break;
    case 3:
      ele = delq(q);
      printf("\nDeleted element: %d\n", ele);
      break;
    case 4:
      printf("\nThe status of the Queue:-\n");
      display(q);
      break;
    case 5:
      exit(1);
    default:
      printf("\nInvalid choice, try again...\n");
    }
  }
}


int empty(qptr q) {
  if (q -> front == NULL)
    return (1);
  else
    return (0);
}


void addq(qptr q, int num) {
  nodeptr temp;
  temp = (nodeptr) malloc(sizeof(struct node));
  if (temp == NULL)
    printf("\nQueue overflow.\n");
  temp -> val = num;
  temp -> next = NULL;
  if (q -> rear == NULL) {
    q -> rear = q -> front = temp;
    return;
  }
  q -> rear -> next = temp;
  q -> rear = q -> rear -> next;
  printf("%d is inserted into the Queue.", num);
}


int delq(qptr q) {
  nodeptr temp;
  int num;
  if (empty(q)) {
    printf("\nQueue underflow.\n");
    exit(1);
  }
  num = q -> front -> val;
  temp = q -> front;
  q -> front = q -> front -> next;
  free(temp);
  return num;
}


void display(qptr q) {
  nodeptr s;
  if (empty(q)) {
    q -> rear = q -> front = NULL;
    printf("\nQueue is empty.\n");
  }
  s = q -> front;
  while (s != NULL) {
    if (s -> next == NULL) {
      printf("|%d|%u|", s -> val, s -> next);
      s = s -> next;
    } else {
      printf("|%d|%u|-->", s -> val, s -> next);
      s = s -> next;
    }
  }
}