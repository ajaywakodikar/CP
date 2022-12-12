#include <iostream>

struct Node {
    int data;
    Node* next;
};

void remove_duplicates(Node* head) {
    if(head == nullptr) return;
    Node* curr = head;
    if(head->next) head = head->next;
    while(head) {
        if(head->data == curr->data) head = head->next;
        else {
            curr->next = head;
            curr = curr->next;
        }
    }   
    curr->next = nullptr;
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
    Node* A = new Node();
    Node* temp = A;
    A->data = 11;
    A->next = new Node();
    A = A->next;
    A->data = 11;
    A->next = new Node();
    A = A->next;
    A->data = 11;
    A->next = new Node();
    A = A->next;
    A->data = 21;
    A->next = new Node();
    A = A->next;
    A->data = 43;
    A->next = new Node();
    A = A->next;
    A->data = 43;
    A->next = new Node();
    A = A->next;
    A->data = 60;
    A->next = new Node();
    A = A->next;
    A->data = 70;
    A->next = new Node();
    A = A->next;
    A->data = 70;
    A->next = new Node();
    A = A->next;
    A->data = 70;
    A->next = new Node();
    A = A->next;
    A->data = 80;
    A->next = new Node();
    A = A->next;
    A->data = 80;
    A->next = new Node();
    A = A->next;
    A->data = 90;
    A->next = new Node();
    A = A->next;
    A->data = 90;
    A->next = new Node();
    A = A->next;
    A->data = 90;
    std::cout << "With duplicates: "; print(temp);
    remove_duplicates(temp);
    std::cout << "Without duplicates: "; print(temp);
}