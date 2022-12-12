#include <iostream>

struct Node {
    int data;
    Node* next;
};

std::pair<Node*, bool> loop_detection(Node* head) {
    Node* slow = head; Node* fast = head;
    while(slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return std::make_pair(slow, true);
    }
    return std::make_pair(nullptr, false);
}

int loop_length(Node* head) {
    std::pair<Node*, bool> x = loop_detection(head);
    if(loop_detection(head).second) {
        Node* slow = x.first;
        Node* fast = x.first;
        int count = 0;
        while(slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            ++count;
            if(slow == fast) return count;
        }
    }
    else return -1;
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
    A->data = 60;
    A->next = temp->next->next;
    std::cout << std::boolalpha << loop_detection(temp).second << '\t' << loop_length(temp);
}
