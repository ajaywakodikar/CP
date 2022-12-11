#include <iostream>

int first_set_bit(unsigned int n) {
    int count = 1;
    while(n > 0) {
        if(n & 1) return count;
        ++count;
        n = n >> 1;
    }
    return 0;
}

int main() {
    std::cout << first_set_bit(18);
}