
#include<stdio.h>
#include<stdlib.h>
#define MAX[100]
void insert ();
void delete ();
int front=-1;
void insert ()
{
    int d;
    printf ("Enter the elements");
    scanf ("\n%d",&d);
    if (rear==MAX-1)
    {
      printf("Stack overflow");
      return;
    }
    if (front==-1&&rear==-1)
    {
     front=0;
     return ;
    }
    else 
    {
     rear=rear+1;
    }
    queue[rear]=d;
 }
 void delete()
 {
  int d;
  if (front==-1 || front>rear)
    {
     printf ("Stack underflow");
     return;
    }
    else 
    {
     d=queue [front];
     if (front==rear)
     {
      front =-1;
      rear=-1;
     }
     else 
     {
      front=front+1;
     }
     printf ("value deleted");
     }
}
