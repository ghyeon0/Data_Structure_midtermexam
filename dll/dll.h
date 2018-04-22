class Node{
    public:
        int data;
        Node *prev;
        Node *next;
        Node(int val);
};

class Dll{
    public:
        Node *head;
        Dll();
        void add(int val);
        void del(int val);
        void forward();
        void backward();
        void search(int val);
        int empty();
};