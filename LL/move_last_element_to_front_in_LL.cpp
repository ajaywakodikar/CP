#include <iostream>

struct Node {
    int data;
    Node *next;
};

Node* move_to_front(Node* head) {
    if(head == nullptr) return nullptr;
    Node* last = head;
    Node* sec_last = nullptr;
    while(last->next) {
        sec_last = last;
        last = last->next;
    }
    sec_last->next = nullptr;
    last->next = head;
    return last;
}

void print(Node* temp) {
    while(temp != nullptr) {
        std::cout << temp->data;
        temp = temp->next;
        if(temp != nullptr) std::cout << "->";
    }
    std::cout << '\n';
}

int main() {
    Node* temp;
    Node* A = new Node();
    temp = A;
    A->data = 5;
    A->next = new Node();
    A = A->next;
    A->data = 10;
    A->next = new Node();
    A = A->next;
    A->data = 15;
    A->next = new Node();
    A = A->next;
    A->data = 20;
    A->next = new Node();
    A = A->next;
    A->data = 25;
    A->next = new Node();
    A = A->next;
    A->data = 30;
    A->next = new Node();
    A = A->next;
    A->data = 35;
    print(temp);
    temp = move_to_front(temp);
    print(temp);
}