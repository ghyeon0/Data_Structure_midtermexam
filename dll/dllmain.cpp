#include "dll.h"

int main(){
    Dll list;
    list.add(5);
    list.add(6);
    list.add(7);
    list.add(1);
    list.forward();
    list.backward();
    list.del(7);
    list.forward();
    list.backward();
}