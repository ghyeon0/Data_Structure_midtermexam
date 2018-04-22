#include "sll.h"

int main(){
    Sll list;
    list.add(5);
    list.add(6);
    list.traverse();
    list.add(7);
    list.add(1);
    list.traverse();
    list.del(6);
    list.traverse();
}