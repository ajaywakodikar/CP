#include <iostream>
#include <cmath>

bool is_strict_power_of_2(long long n) {
    if(n == 0) return false;
    long long x = n & (n - 1);
    return x == 0;
}

int set_bit_pos(long long n) {
    if(!is_strict_power_of_2(n)) return -1;
    return log2(n) + 1;
}

int main() {
    std::cout << set_bit_pos(8);
}