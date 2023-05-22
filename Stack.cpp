#include <iostream>
#include "stack.h"

using namespace std;


void Stack::ispush(int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

void Stack::ispop() {
    if (isEmpty()) {
        cout << "스택이 비어있습니다." << endl;
        return;
    }
    Node* old = top;
    top = old->next;
    cout << "pop된 값 : " << old->data << endl;
    delete old;
}

bool Stack::isEmpty() {
    return top == NULL;
}
