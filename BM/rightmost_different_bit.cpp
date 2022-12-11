#include <iostream>

int first_set_bit(unsigned long long n) {
    int count = 1;
    while(n > 0) {
        if(n & 1) return count;
        ++count;
        n = n >> 1;
    }
    return 0;
}

int rightmost_different_bit(unsigned long long x, unsigned long long y) {
    return first_set_bit(x ^ y);
}

int main() {
    std::cout << rightmost_different_bit(52, 4);
}