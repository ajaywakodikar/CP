#include <iostream>

int bit_difference(unsigned int x, unsigned int y) {
    unsigned int n = (x ^ y);
    int count = 0;
    while(n) {
        n &= (n - 1);
        ++count;
    }
    return count;
}

int main() {
    std::cout << bit_difference(10, 20);
}
