#include "stack.h"
#include <iostream>

Node::Node(int val){
    data = val;
    next = NULL;
}

Stack::Stack(){
    head = 0;
}

void Stack::push(int val){
    Node *temp = new Node(val);
    if (head == 0){
        head = temp;
    }else{
        temp -> next = head;
        head = temp;
    }
}

int Stack::pop(){
    Node *p;
    int val;
    val = head -> data;
    p = head;
    head = head -> next;
    delete p;
    return val;
}

int Stack::empty(){
    return head == 0;
}

void Stack::display(){
    Node *p;
    if (Stack::empty()){
        std::cout << "Stack is empty." << std::endl;
    }else{
        p = head;
        while (p != 0){
            std::cout << p -> data << " ";
            p = p -> next;
        }
        std::cout << std::endl;
    }
}

void Stack::search(int val){
    Node *p;
    p = head;
    while (p != 0){
        if (p -> data == val){
            std::cout << val << " is in the list." << std::endl;
            return;
        }
        p = p -> next;
    }
    std::cout << val << " is not in the list." << std::endl;
}