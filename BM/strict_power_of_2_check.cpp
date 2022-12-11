#include <iostream>

bool is_strict_power_of_2(unsigned long long n) {
    if(n == 0) return false;
    long long x = n & (n - 1);
    return x == 0;
}

int main() {
    unsigned long long n = 4096;
    std::cout << std::boolalpha << is_strict_power_of_2(n);
}