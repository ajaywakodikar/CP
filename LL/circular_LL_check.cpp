#include <iostream>

struct Node {
    int data;
    Node *next;
};

bool is_circular_LL(Node* head) {
    if(head == NULL) return true;
    Node* N = head->next;
    while(N != NULL && N != head) N = N->next;
    return N == head;
}

int main()
{
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 2;
    head->next->next = new Node();
    head->next->next->data = 3;
    head->next->next->next = new Node();
    head->next->next->next->data = 4;
    is_circular_LL(head)? std::cout << "Yes\n" : std::cout << "No\n" ;
 
    head->next->next->next->next = head;
    is_circular_LL(head)? std::cout << "Yes\n" : std::cout << "No\n" ;
 
    return 0;
}