#include <iostream>

bool Kth_bit_set_check(unsigned int N, int k) {
    if((N >> (k - 1)) & 1) return true;
    return false; 
}

int main() {
    std::cout << std::boolalpha << Kth_bit_set_check(5, 2);
}