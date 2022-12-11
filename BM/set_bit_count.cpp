#include <iostream>

int set_bit_count(unsigned int n) {
    int count = 0;
    while(n) {
        n &= (n - 1);
        ++count;
    }
    return count;
}

int main() {
    unsigned int x = 10;
    std::cout << set_bit_count(x);
}
