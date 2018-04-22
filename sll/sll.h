class Node{
    public:
        Node(int val);
        int data;
        Node *next;
};

class Sll{
    public:
        Sll();
        Node *head;
        void add(int val);
        void del(int val);
        void traverse();
        int empty();
};