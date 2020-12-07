
// 5-Dec-2020 

// code by shubham pandav 
//Implementaion of queue using array
//...
#include <stdio.h>
#include <conio.h>
#define n 5

int i;          // define i variable for loop
int rear = -1;  //for adding value to queue
int front = -1; // for deleting value from queue
int queue[n];   // this is array of queue that we use for Implementaion of queue data structure

// this is the main method of this program
int main(int argc, char const *argv[])
{
     enqueue(1); // here we call your created method for inserting new element to queue
   enqueue(2);
//    enqueue(3);
//    enqueue(4);
    dequeue();  // here we call your created method for deleting element from queue


   display(); // this method display element of queue
}

// this is for adding new element to queue
void enqueue(int x)
{

    if (rear == n - 1)
    {
        printf("list is full");
    }
    if (rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
// this is for showing how many element are present in queue
void display()
{

    if (rear == -1 && front == -1)
    {
        printf("list is Empty");
    }
    else
    {
        for (i = 0; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}
// this function for deleting element from first
void dequeue()
{ int item;
    if (front == -1)
{
    printf("queue is Empty");
}else
{
     item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nvalue deleted ");  
    }  
}


      


// this is showing first element of queue
void peek()
{

    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty");
    }

    else
    {
        printf("%d", queue[front]);
    }
}