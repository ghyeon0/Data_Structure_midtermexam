#include "queue.h"
#include <iostream>

Node::Node(int val){
    data = val;
    next = NULL;
}

Queue::Queue(){
    front = NULL;
    rear = NULL;
}

int Queue::empty(){
    return front == rear;
}

void Queue::enqueue(int val){
    Node *temp = new Node(val);
    if (front == 0){
        front = temp;
        rear = temp;
    }else{
        rear -> next = temp;
        rear = temp;
    }
}

int Queue::dequeue(){
    if (Queue::empty()){
        return -1;
    }else{
        Node *p;
        p = front;
        int num = p -> data;
        front = front -> next;
        delete p;
        return num;
    }
}

void Queue::display(){
    Node *p;
    p = front;
    while (p != 0){
        std::cout << p -> data << " ";
        p = p -> next;
    }
    std::cout << std::endl;
}

void Queue::search(int val){
    Node *p;
    p = front;
    while (p != 0){
        if (p -> data == val){
            std::cout << val << " is in the list." << std::endl;
            return;
        }
        p = p -> next;
    }
    std::cout << val << " is not in the list." << std::endl;
}