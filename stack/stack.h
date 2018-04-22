class Stack{
    public:
        Stack();
        int top;
        int stack[100];
        void push(int val);
        int pop();
        int empty();
        int full();
};