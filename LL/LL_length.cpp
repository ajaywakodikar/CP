#include <iostream>

struct Node {
    int data;
    Node* next = nullptr;
};

int it_length(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp) {
        ++count;
        temp = temp->next;
    }
    return count;
}

int rc_length(Node* head) {
    if(head == nullptr) return 0;
    else return (1 + rc_length(head->next));
}

int main() {
    Node* A = new Node();
    Node* temp = A;
    A->data = 20;
    A->next = new Node();
    A = A->next;
    A->data = 10;
    A->next = new Node();
    A = A->next;
    A->data = 70;
    A->next = new Node();
    A = A->next;
    A->data = 50;
    A->next = new Node();
    A = A->next;
    A->data = 110;
    A->next = new Node();
    A = A->next;
    A->data = 90;
    std::cout << "Iterative length: " << it_length(temp) << "\nRecursive length: " << rc_length(temp); 
}