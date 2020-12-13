/////////////////////////////////////////////////////////////////////////
/////////////////////////////// Queue.h /////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: This file contain the Queue struct and all  function declarion
//      that responsible for monipulate the Queue.

#ifndef QUEUE_H
#define QUEUE_H

#define _CRT_SECURE_NO_WARNINGS
//............................Includes.................................//
//.....................................................................//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#include "HardCodedData.h"
//............................Defines..................................//
//.....................................................................//

//...........................Structs...................................//
//.....................................................................//
typedef struct node{
    int data;
    struct node *next;
}Node;


typedef struct queue {
    int count;
    Node *front;
    Node *rear;
}Queue;

//...........................Functions.................................//
//.....................................................................//

Queue* Queue__initializeQueue();
int Queue__Top(Queue*q);
int Queue__Pop(Queue*q);
bool Queue__Empty(Queue*q);
int Queue__Push(Queue*q, int n);
int Queue__DestroyQueue(Queue*q);
void Queue_PrintQueue(Queue* q);

#endif // !QUEUE_H
