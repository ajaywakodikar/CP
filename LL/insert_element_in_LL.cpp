#include <iostream>

struct Node {
    int data;
    Node* next = nullptr;
};

void print(Node* temp) {
    while(temp != nullptr) {
        std::cout << temp->data;
        temp = temp->next;
        if(temp != nullptr) std::cout << "->";
    }
    std::cout << '\n';
}

Node* insert_front(Node* head, int data) {
    Node* temp = new Node;
    temp->data = data;
    if(head == nullptr) return temp;
    temp->next = head;
    return temp;
}

Node* insert_back(Node* head, int data) {
    Node* temp = new Node;
    temp->data = data;
    Node* temp2 = head;
    if(head == nullptr) return temp;
    while(head->next != nullptr) {
        head = head->next;
    }
    head->next = temp;
    return temp2;
}

int main() {
    Node* A = new Node();
    Node* temp = A;
    A->data = 5;
    A->next = new Node();
    A = A->next;
    A->data = 10;
    A->next = new Node();
    A = A->next;
    A->data = 15;
    
    print(temp);

    temp = insert_front(temp, 20);

    print(temp);

    temp = insert_back(temp, 25);

    print(temp);
}