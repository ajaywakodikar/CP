#include <iostream>
#include <algorithm>
#include <array>

struct Pair {
    int mx, mn;
};

Pair Kth_max_min(int nums[], int size, int k) {
    Pair x = {0, 0};
    if(k > size) return x;
    std::sort(nums, nums + size);
    x.mx = nums[size - k];
    x.mn = nums[k - 1];
    return x;
}

int main() {
    int nums[] = {4, 8, 5, 1, 9, 7, 2, 3};
    Pair x = Kth_max_min(nums, 8, 3);
    std::cout << "Max: " << x.mx << "\tMin: " << x.mn;
}