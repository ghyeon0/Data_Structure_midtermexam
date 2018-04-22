#include "stack.h"
#include <iostream>

using namespace std;
int main(){
    Stack st;
    std::cout << st.empty() << std::endl;
    st.push(1);
    st.push(5);
    st.push(3);
    st.display();
    std::cout << st.pop() << std::endl;
    st.search(2);
    st.search(5);
    st.display();
}