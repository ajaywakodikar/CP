#include <iostream>
#include <stack>

struct Node {
    int data;
    Node* next = nullptr;
};

Node* it_reverse(Node* head) {
    if(head == nullptr) return nullptr;
    Node* temp = head;
    Node* first = nullptr;
    Node* second = nullptr;
    while(temp != NULL) {
        second = temp->next;
        temp->next = first;
        first = temp;
        temp = second;
    } 
    return first;
}

Node* rc_reverse(Node* head) {
    if(head == nullptr || head->next == nullptr) return head;
    Node* rest = rc_reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return rest;
}

Node* stack_reverse(Node* head) {
    std::stack<Node*> st;
    Node* temp = head;
    while(temp->next) {
        st.push(temp);
        temp = temp->next;
    }
    head = temp;
    while(!st.empty()) {
        temp->next = st.top();
        st.pop();
        temp = temp->next;
    }
    temp->next = nullptr;
    return head;
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
    Node* N = new Node();
    Node* temp = N;
    N->data = 51;
    N->next = new Node();
    N = N->next;
    N->data = 42;
    N->next = new Node();
    N = N->next;
    N->data = 83;
    N->next = new Node();
    N = N->next;
    N->data = 97;
    N->next = new Node();
    N = N->next;
    N->data = 60;
    print(temp);
    temp = it_reverse(temp);
    print(temp);
    temp = rc_reverse(temp);
    print(temp);
    temp = stack_reverse(temp);
    print(temp);
}
