#include "dll.h"
#include <iostream>

Node::Node(int val){
    data = val;
    prev = NULL;
    next = NULL;
}

Dll::Dll(){
    head = 0;
}

int Dll::empty(){
    return head == 0;
}

void Dll::add(int val){
    Node *temp = new Node(val);
    Node *p, *q;
    if (Dll::empty()){
        head = temp;
    }else if (head -> data > temp -> data){
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }else{
        p = head;
        while (p != 0 && p -> data < temp -> data){
            q = p;
            p = p -> next;
        }
        if (p != 0){
            p -> prev = temp;
            temp -> next = p;
            q -> next = temp;
            temp -> prev = q;
        }
        else{
            q -> next = temp;
            temp -> prev = q;
        }
    }
}

void Dll::del(int val){
    Node *p, *q;
    if (Dll::empty()){
        std::cout << "List is empty!" << std::endl;
    }else if (head -> data == val){
        if (head -> next == 0){
            head = 0;
        }else{
            p = head;
            head = head -> next;
            head -> prev = 0;
            delete p;
        }
    }
    else{
        p = head;
        while (p != 0 && p -> data != val){
            q = p;
            p = p -> next;
        }
        if (p -> next != 0 && p -> data == val){
            q -> next = p -> next;
            p -> next -> prev = q;
            delete p;
        }else if (p -> next == 0 && p -> data == val){
            q -> next = 0;
            delete p;
        }else{
            std::cout << val << " is not in the list" << std::endl;
        }
    }
}

void Dll::forward(){
    Node *p;
    p = head;
    while (p != 0){
        std::cout << p -> data << " ";
        p = p -> next;
    }
    std::cout << std::endl;
}

void Dll::backward(){
    Node *p;
    p = head;
    while (p -> next != 0){
        p = p -> next;
    }
    while (p != 0){
        std::cout << p -> data << " ";
        p = p -> prev;
    }
    std::cout << std::endl;
}

void Dll::search(int val){
    Node *p;
    p = head;
    while (p != 0){
        if (p -> data == val){
            std::cout << val << " is in the list" << std::endl;
            return;
        }
        p = p -> next;
    }
    std::cout << val << " is not in the list" << std::endl;
}