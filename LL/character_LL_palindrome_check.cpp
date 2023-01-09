#include <iostream>
#include <string>

struct Node {
    char data;
    Node* next;
    Node(char a) {
        data = a;
        next = nullptr;
    }
};

bool is_palindrome(std::string& str) {
    int N = str.size();
    int l = 0, r = N - 1;
    while(l < r) {
        if(str[l++] != str[r--]) return false;
    }
    return true;
}

std::string text(Node* head) {
    std::string x;
    while(head != nullptr) {
        x.push_back(head->data);
        head = head->next;
    }
    return x;
}

int main() {
    Node* head = new Node('a'); 
    Node* temp = head;
    head->next = new Node('b');
    head = head->next;
    head->next = new Node('c');
    head = head->next;
    head->next = new Node('b');
    head = head->next;
    head->next = new Node('a');
    head = head->next;

    std::string x = text(temp);
    std::cout << std::boolalpha << is_palindrome(x);
  
    return 0;
}