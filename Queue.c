#include "Queue.h"
//...........................Functions.................................//
//.....................................................................//
/*
* Function:        Queue__initializeQueue
* description:     this fuction create new Queue
* input:           Null
* output:          Queue pointer
*/
Queue* Queue__initializeQueue(){
    Queue* q = NULL;

    q = (Queue*)malloc(sizeof(Queue));
    if (q == NULL) {
        printf("Fatal error: memory allocation failed!\n");
        return NULL;
    }
    return q;
    
}

/*
* Function:        Queue__Top
* description:     this fuction return the front element in Queue
* input:           Queue pointer
* output:          element
*/
int Queue__Top(Queue*q){
    return q->front->data;
}

/*
* Function:        Queue__Empty
* description:     this fuction return if Queue is empty
* input:           Queue pointer
* output:          T/F
*/
bool Queue__Empty(Queue*q){
    if (q->count==0) {
        return true;
    }
    else
        return false;
}

/*
* Function:        Queue__Pop
* description:     this fuction pops the front element in Queue
* input:           Queue pointer
* output:          exit_status
*/
int Queue__Pop(Queue*q){
    Node *tmp;
    if (Queue__Empty(q)) {
        return EXIT_SUCCESS;
    }
    tmp=q->front;
    q->front=q->front->next;
    q->count--;
    free(tmp);
    return EXIT_SUCCESS;
}

/*
* Function:        Queue__Push
* description:     this fuction add a value to the rear of the Queue
* input:           Queue pointer and int
* output:          exit_status
*/
int Queue__Push(Queue *q, int n){
    Node *tmp;
    tmp=malloc(sizeof(Node));
    tmp->data=n;
    tmp->next=NULL;
    if(!Queue__Empty(q)){
        q->rear->next=tmp;
        q->rear=tmp;
    }
    else{
        q->front=tmp;
        q->rear=tmp;
    }
    q->count++;
    free(tmp);
    return EXIT_SUCCESS;
}
/*
* Function:        Queue__DestroyQueue
* description:     this fuction realese the Queue
* input:           Queue pointer
* output:          exit_status
*/
int Queue__DestroyQueue(Queue*q){
    while (!Queue__Empty(q)) {
        Queue__Pop(q);
    }
    free(q);
    return EXIT_SUCCESS;
}

/*
* Function:        Queue__PrintQueue
* description:     this fuction prints the Queue
* input:           Queue pointer
* output:          exit_status
*/
void Queue_PrintQueue(Queue* q)
{
    Node* e;
    e = (Node*)malloc(sizeof(Node));

    for(e=q->front; e!=NULL; e=e->next){
        printf("%d", e->data);
    }
}
