class Node{
    public:
        int data;
        Node *next;
        Node(int val);
};

class Queue{
    public:
        Node *front;
        Node *rear;
        Queue();
        void enqueue(int val);
        int dequeue();
        int empty();
        void display();
        void search(int val);
};