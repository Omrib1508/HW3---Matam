/////////////////////////////////////////////////////////////////////////
//////////////////////////////// Queue.c ////////////////////////////////
/////////////////////////////////////////////////////////////////////////

//info: This Queue.c file of the Factori process is incharge for create
//      the Queue and arrange in array all the mission inside it.

//............................Includes.................................//
//.....................................................................//
#include "Queue.h"

//...........................Functions.................................//
//.....................................................................//
/*
* Function:        Queue__initializeQueue
* description:     this fuction create new Queue
* input:           Null
* output:          Queue pointer
*/
Queue* Queue__initializeQueue(){}

/*
* Function:        Queue__Top
* description:     this fuction return the front element in Queue
* input:           Queue pointer
* output:          element
*/
int Queue__Top(Queue* queue){}

/*
* Function:        Queue__Pop
* description:     this fuction pops the front element in Queue
* input:           Queue pointer
* output:          exit_status
*/
int Queue__Pop(Queue* queue) {}

/*
* Function:        Queue__Push
* description:     this fuction push element to rear Queue
* input:           Queue__Push
* output:          exit_status
*/
int Queue__Push(Queue* queue, int element){}

/*
* Function:        Queue__Empty
* description:     this fuction return if Queue is empty
* input:           Queue pointer
* output:          T/F
*/
int Queue__Empty(Queue* queue){}

/*
* Function:        Queue__DestroyQueue
* description:     this fuction realese the Queue
* input:           Queue pointer
* output:          exit_status
*/
int Queue__DestroyQueue(Queue* queue){}
