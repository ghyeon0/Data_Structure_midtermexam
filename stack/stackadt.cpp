#include <iostream>
#include "stack.h"

Stack::Stack(){
    stack[100] = {0, };
    top = -1;
}

void Stack::push(int val){
    if (!Stack::full()){
        stack[++top] = val;
    }
}

int Stack::pop(){
    if (Stack::empty()){
        return -1;
    }else{
        return stack[top--];
    }
}

int Stack::empty(){
    return top == -1;
}

int Stack::full(){
    return top == 99;
}