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


#include "HardCodedData.h"
//............................Defines..................................//
//.....................................................................//

//...........................Structs...................................//
//.....................................................................//
typedef struct queue {
	int front;
	int rear;
	int size;
	int* array;
} Queue;

//...........................Functions.................................//
//.....................................................................//

Queue* Queue__initializeQueue();

int Queue__Top(Queue* queue);

int Queue__Pop(Queue* queue);

int Queue__Push(Queue* queue, int element);

int Queue__Empty(Queue* queue);

int Queue__DestroyQueue(Queue* queue);

#endif // !QUEUE_H
