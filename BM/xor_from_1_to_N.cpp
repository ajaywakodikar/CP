#include <iostream>

short xor_from_1_to_N(unsigned long x) {
    if(x % 4 == 0) return x;
    else if(x % 4 == 1) return 1;
    else if(x % 4 == 2) return x + 1;
    else return 0; 
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned long x = 10;
    std::cout << xor_from_1_to_N(x);
}