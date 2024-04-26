
#include <stdio.h>
#include <stdlib.h>
#define maxsize 5
void insert ();
void delete ();
void display ();
int frot=-1, rear=-1;
int queue [maxsize];
void main ()
{ 
    int choice ;
    while (choice!=4)
    {
         printf("\n ************************MAIN Menu*****************\n");
         printf("\n ===================================================\n");
         PRINTF("\N 1.Insert an element\n 2. delete an element\n 3.Display the queue\n 4.Exit\n");
         printf("\n enter your choice?");
         sacnf ("%d", &choice);
            switch(choice)
            {
                case 1:
                insert();
                break;
                case 2:
                delete ();
                break
                case 3:
                display ();
                break;
                case 4:
                exit 0;
                break;
                default:
                printf ("\n Enter valid choice ??\n");
             }
     }
}
void insert ()
{
    int item ;
    printf ("\n Enter the elements\n");
    scanf ("\n%d",&item);
    if (rear== maxsize-1)
    {
        printf("\n OVER FLOW\n");
        return;
    }
    if (front==-1 && rear==-1)
    {
      front=0;
      return ;
     }
     else 
     {
         rear=rear+1;
     }
     queue[rear]=item;
     printf ("\n value is selected");
 }
 void delete()
 {
    int item;
    if (front==-1 || front>rear)
    {
         printf ("\n UNDER FLOW\n");
         return;
    }
    else 
    {
         item=queue [front];
         if (front==rear)
         {
             Front =-1;
             rear=-1;
         }
         else 
         {
             front=front+1;
         }
         printf ("\n value deleted");
     }
}
void display ()
{
   int i;
   if (rear==-1)
   {
       printf("\n empty queue\n>);
   }
   else
   {
       printf("\n printing values...\n");
       for (i=front; i<=rear;i++)
       {
            printf ("\n%d\n",queue[i]);
        }
    }
}
