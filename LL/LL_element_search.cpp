#include <iostream>

struct Node {
    int data;
    Node* next;
};

bool it_search(Node* head, int x) {
    if(head == nullptr) return false;
    Node* curr = head;
    while(curr) {
        if(curr->data == x) return true;
        curr = curr->next;
    }
    return false;
}

bool rc_search(Node* head, int x) {
    if(head == nullptr) return false;
    if(head->data == x) return true;
    return rc_search(head->next, x);
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
    std::cout << std::boolalpha << "Iterative search: " << it_search(temp, 70) << "\nRecursive search: " << rc_search(temp, 60);
}