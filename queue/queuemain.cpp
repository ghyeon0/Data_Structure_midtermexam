#include <iostream>
#include "queue.h"

int main(){
    Queue q;
    std::cout << q.empty() << std::endl;
    std::cout << q.full() << std::endl;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(0);
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
}