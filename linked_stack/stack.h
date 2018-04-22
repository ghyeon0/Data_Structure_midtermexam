class Node{
    public:
        int data;
        Node *next;
        Node(int val);
};

class Stack{
    public:
        Node *head;
        Stack();
        void push(int val);
        int pop();
        int empty();
        void display();
        void search(int val);
};