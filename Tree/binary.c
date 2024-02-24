#include<stdio.h>
#include<stdlib.h>
#include "binary.h"
struct Qnode{
    struct TreeNode *node;
    struct Qnode *next; 
}*front, *rear;
void initQ()
{
    front=rear=NULL;

}
int isQEmpty(){
    if(front==rear && rear==NULL)
    {
        printf("\n Queue is Empty\n");
        return 1;
    }
    return 0;
}
void enqueue(struct TreeNode *Tnode)
{
    struct Qnode *nptr =(struct Qnode*)malloc(sizeof(struct Qnode));
    nptr->node = Tnode;
    nptr->next = NULL;
    if(rear == NULL)
    {
        front = nptr;
        rear = nptr;
    }
    else{
        rear->next = nptr;
        rear = rear->next;
    }
}
void Qnode *dequeue()
{
    struct Qnode *temp;
    if(front==NULL)
    {
        printf("\n\nQueue is empty");
    }
    else{
        temp =front;
        front=front->next;
        if(temp==rear)
        {
            rear = front;
        }
       
    }
     return temp;
}
void levelOrderTraversal(struct TreeNode *root)
{
    
}