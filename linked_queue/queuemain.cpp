#include "queue.h"
#include <iostream>

int main(){
    Queue q;
    std::cout << q.empty() << std::endl;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(7);
    q.display();
    q.search(3);
    q.search(7);
    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;
}