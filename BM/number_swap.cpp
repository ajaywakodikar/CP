#include <iostream>

void number_swap(long long& x, long long& y) {
    x ^= y;
    y ^= x;
    x ^= y;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long a = 10, b = 20;
    number_swap(a, b);
    std::cout << a << '\t' << b;
}