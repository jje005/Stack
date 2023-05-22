struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() { top = NULL; }
    void ispush(int val);
    void ispop();
    bool isEmpty();
};
