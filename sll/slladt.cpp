#include "sll.h"
#include <iostream>

Node::Node(int val){
    data = val;
    next = NULL;
}

Sll::Sll(){
    head = 0;
}

void Sll::add(int val){
    Node *temp = new Node(val);
    Node *p, *q;
    if (head == 0){
        head = temp;
    }else if (head -> data > temp -> data){
        temp -> next = head;
        head = temp;
    }else{
        p = head;
        while (p != 0 && p -> data < temp -> data){
            q = p;
            p = p -> next;
        }
        if (p != 0){
            q -> next = temp;
            temp -> next= p;
        }else{
            q -> next = temp;
        }   
    }
}

void Sll::del(int val){
    Node *p, *q;
    if (head == 0){
        std::cout << "List is empty!" << std::endl;
    }else if (head -> data == val){
        p = head;
        head = head -> next;
        delete p;
    }else{
        p = head;
        while (p != 0 && p -> data != val){
            q = p;
            p = p -> next;
        }
        if (p == 0){
            std::cout << val << " " << "is not in the list." << std::endl;
        }else{
            q -> next = p -> next;
            delete p;
        }
    }
}

void Sll::traverse(){
    Node *p;
    if (head == 0){
        std::cout << "List is empty!" << std::endl;
    }else{
        std::cout << "traverse" << std::endl;
        p = head;
        while (p != 0){
            std::cout << p -> data << std::endl;
            p = p -> next;
        }
    }
}

int Sll::empty(){
    return head == 0;
}