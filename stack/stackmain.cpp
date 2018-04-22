#include <iostream>
#include "stack.h"

int main(){
    Stack st;
    st.push(1);
    st.push(3);
    st.push(5);
    std::cout << st.pop() << std::endl;
    std::cout << st.pop() << std::endl;
}
