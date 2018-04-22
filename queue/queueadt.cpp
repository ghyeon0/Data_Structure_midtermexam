#include "queue.h"

Queue::Queue(){
    front = -1;
    rear = -1;
}

void Queue::enqueue(int val){
    if (!Queue::full()){
        queue[++rear] = val;
    }
}

int Queue::dequeue(){
    if (!Queue::empty()){
        return queue[++front];
    }else{
        return -1;
    }
}

int Queue::full(){
    return rear == 99;
}

int Queue::empty(){
    return front == rear;
}