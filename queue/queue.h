class Queue{
    public:
        int queue[100];
        int front;
        int rear;
        Queue();
        void enqueue(int val);
        int dequeue();
        int full();
        int empty();
};  